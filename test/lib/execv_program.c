#include "main.h"

int _exec_program(void)
{
	int i, j;
	size_t BUFSIZE = 30;
	char *line = NULL;
	char *token[3];

	line = _create_array(BUFSIZE);
	if (line == NULL)
		return (-1);

	printf("($)");

	/*obtiene la linea del usuario*/
	if (getline(&line, &BUFSIZE, stdin) == -1)
	{
		return (-1);
	}

	_separate_words(line, token, " ");

	/*ejecuta el programa pasado a la linea de comando*/
	if (execve(token[0], token, NULL) == -1)
	{
		printf("Orden no encontrada!\n");
		return (-1);
	}

	return(0);
}
