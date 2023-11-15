#include "exmpl_shell.h"


int main (void)
{
    char *command;

    while (true)
    {
        display_a_prompt();
        read_command(command, sizeof(command));
        execute_command(command);
    }


    return 0;
}