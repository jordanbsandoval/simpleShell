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

int _exec_program(void);
int _crear_proceso(pid_t);
char *_create_array(size_t);
int _strlen(const char *);
void _separate_words(char *, char **, const char *);
int _strcmp(const char *, const char *);
char *_copy(char *, char *);
char *_getenv(const char *s);


#endif
