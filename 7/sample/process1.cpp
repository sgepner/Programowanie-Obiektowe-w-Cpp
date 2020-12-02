#include <iostream>

#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/prctl.h>

int main()
{
    pid_t my_pid = getpid();
    std::cout << "T:" << my_pid << " will Fork" << std::endl;

    pid_t childpid = fork();
    if ( childpid == -1 )
    {
        perror ( "Failed to Fork" );
        return -1;
    }
    

    if ( my_pid == getpid() ) // I am parent
    {
        std::cout << "TP: " << getpid() << " is alive. Parent: " << my_pid << " Child: " << childpid << std::endl;
        for ( int i=0; i<10; ++i )
        {
            sleep ( 1 );
            std::cout << "TP: pid: " << getpid() << " ppid: " << getppid() << std::endl;
            waitpid ( childpid, 0, WNOHANG );
        }
        waitpid ( childpid, 0, 0 );
    }
    else if ( childpid == 0 ) // I am child
    {
        std::cout << "TC: " << getpid() << " is alive. Parent: " << my_pid << " Child: " << childpid << std::endl;
        for ( int i=0; i<10; ++i )
        {
            sleep ( 1 );
            std::cout << "TC: " << getpid() << " is alive. Parent: " << my_pid << " Child: " << childpid << std::endl;
        }
    }

    std::cout << "TP:" << getpid() << " I am done Processing"<< std::endl;

    return 0;
}
