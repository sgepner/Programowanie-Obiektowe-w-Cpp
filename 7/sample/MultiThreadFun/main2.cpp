#include <iostream>
#include <unistd.h>

int main ( int argv, char *argc[] )
{
    pid_t my_pid = getpid();
    for ( int i=0; i<10; ++i )
    {
        sleep ( 1 );
        std::cout << i << " W:" << my_pid << " I am worker with arguments ";
        for(int j=1; j<argv; j++) std::cout << argc[j] << " ";
        std::cout << std::endl;
    }
    
    return 0;
}
