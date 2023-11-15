#include "exmpl_shell.h"

void my_print(const char *string) 
{
    write(STDOUT_FILENO, string, strlen(string));
    

}