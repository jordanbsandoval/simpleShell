#ifndef EXECVE
#define EXECVE

/*librerias*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/*prototipos*/

void crear_proceso(pid_t);
void exec_program(void);
char *create_array(size_t);
int _strlen(const char *);


#endif
