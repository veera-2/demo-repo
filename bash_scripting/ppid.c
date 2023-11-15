#include <stdio.h>
#include <unistd.h>  /**unistd. h is the name of the header file 
*that provides access to the POSIX operating system API. It is defined by the POSIX. 
*1 standard, the base of the Single Unix Specification, 
*and should therefore be available in any POSIX-compliant
*operating system and compiler.
*/

int main ()
{
    //int number = 20;

    __pid_t process_id, parent_process_id, child_pid; // pid_t is a data type that is use to track id's in every operating system.

    process_id = getpid();

    parent_process_id = getppid(); //getpid() is a paf the unistd.h function that will be use in this program.
    // it is a low level function, it allowed you to interact with the kernel in systems calls.


    //printf("%d\n", number);
    printf("The process ID is: %u\n", process_id);
    printf("The parent process ID is: %u\n", parent_process_id);

    child_pid = fork();       /**The Fork system call is used for creating a new process in Linux
    *and Unix systems, which is called the child process,which runs concurrently
    *with the process that makes the fork() call (parent process).
    *After a new child process is created, both processes will
    *execute the next instruction following the fork() system call.
    */
   if (child_pid == 0)
   {
    printf("the child process\n");
    printf("parent process ID (PPID): %u\n", getppid());
    printf("current process ID(PID): %u\n", getpid());
    printf("========================================\n");
   }
   else if (child_pid > 0)
   {
    printf("This is a parent process:\n");
    printf("child process ID (PID): %u\n", child_pid);
    printf("========================================\n");
   }
   else
   {
    printf("failed");
    return (1);
   }

    return 0;
}