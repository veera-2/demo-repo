#include <stdio.h>
#include <unistd.h>  /**unistd. h is the name of the header file 
*that provides access to the POSIX operating system API. It is defined by the POSIX. 
*1 standard, the base of the Single Unix Specification, 
*and should therefore be available in any POSIX-compliant
*operating system and compiler.
*/

int main ()
{
    int number = 20;

    __pid_t parent_process_id; // pid_t is a data type that is use to track id's in every operating system.

    parent_process_id = getppid(); //getpid() is a paf the unistd.h function that will be use in this program.
    // it is a low level function, it allowed you to interact with the kernel in systems calls.


    printf("%d\n", number);
    printf("The parent process id is %u\n", parent_process_id);


    return 0;
}