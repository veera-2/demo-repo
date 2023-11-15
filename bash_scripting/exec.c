#include "exmpl_shell.h"

void exec_command(const char *string)
{
    __pid_t child_pid = fork(); //create a child process

    if (child_pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (child_pid == 0)
    {
        //child process
        execlp(string, string, (char *)NULL);
        perror("execlp");
        exit(EXIT_FAILURE);
    }
    else
    {
        //parent process
        wait(NULL);
    }

    

}