#include "main.h"

void crear_proceso(pid_t hi)
{
	int status;

	hi = fork();
	if (hi == -1)
		perror("el fork fallo!\n");
	if (hi == 0)
	{
		exec_program();
	}
	else
	{
		wait(&status);
	}
}
