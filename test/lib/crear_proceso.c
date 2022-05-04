#include "main.h"

int _crear_proceso(pid_t hi)
{
	int status;

	hi = fork();

	if (hi == -1)
	{
		perror("el fork fallo!\n");
		return (-1);
	}
	if (hi == 0)
	{
		if (_exec_program() == -1)
		{
			return (-1);
		}
	}
	else
	{
		wait(&status);
	}

	return (1);
}
