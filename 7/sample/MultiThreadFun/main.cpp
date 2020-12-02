#include <iostream>

#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/prctl.h>

#include <thread>

void call_from_thread ( int num )
{
    pid_t my_pid = getpid();
    std::cout << "T:" << my_pid << " will Fork" << std::endl;

    pid_t childpid = fork();
    if ( childpid == -1 )
    {
        perror ( "Failed to Fork" );
        return;
    }
    prctl ( PR_SET_PDEATHSIG, SIGHUP ); // on a linux system this ensures that the child dies with parent

    if ( my_pid == getpid() ) // I am parent
    {
        std::cout << "TP: " << getpid() << " is alive. Parent: " << my_pid << " Child: " << childpid << std::endl;
        for ( int i=0; i<num; ++i )
        {
            sleep ( 1 );
            std::cout << "TP: pid: " << getpid() << " ppid: " << getppid() << std::endl;
            //kill(childpid, SIGTERM);
            //waitpid(childpid, 0, 0);
            //waitpid ( childpid, 0, WNOHANG );
        }
        //waitpid ( childpid, 0, 0 );
    }
    else if ( childpid == 0 ) // I am child
    {
        std::cout << "TC: " << getpid() << " is alive. Parent: " << my_pid << " Child: " << childpid << std::endl;
        execl ( "/home/sgepner/OneDrive/Dydaktyka/C++/wyklady/7/sample/MultiThreadFun/build/mproc_worker", "mproc_worker", "1", "22", "aaa", ( char * ) 0 ); // After this the child process remade to worker,
        std::cout << "TC:" << getpid() << " Child " << getppid() << std::endl; // This is not executed, because child terminates with worker
        //kill(my_pid, SIGTERM);
    }

    std::cout << "TP:" << getpid() << " I am done Processing"<< std::endl;
}

int main()
{
    int a;
    while ( 1 )
    {
        std::cout << "Main listen loop, make a choice" << std::endl;
        std::cin >> a;

        if ( a == 0 ) break;

        if ( a == 1 ) //spawn a thread
        {
            std::thread t1 ( call_from_thread, 2 );
            t1.detach();
        }

        sleep ( a );
    }

    std::cout << " I am out of here " << std::endl;
    return 0;
}
