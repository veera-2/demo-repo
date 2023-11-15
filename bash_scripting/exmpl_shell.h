#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

void my_print(const char *string);
void exec_command(const char *string);

#endif /*SHELL_H*/