#include "main.h"

void exec_program(void)
{
	int i, j;
	size_t BUFSIZE = 30;
	char *line = NULL, *str1;
	char *token[3];
	const char *del = " ";

	line = create_array(BUFSIZE);
	if (line == NULL)
		return ;

	printf("($)");

	/*obtiene la linea del usuario*/
	if (getline(&line, &BUFSIZE, stdin) == -1)
	{
		printf("fallo getline\n");
		return ;
	}

	/*separa la linea introducida en palabras separadas almacenada en un array*/
	for (i = 0, str1 = line; ; i++, str1 = NULL)
	{
		token[i] = strtok(str1, del);
		if (token[i] == NULL)
			break;
	}

	/* Eliminando el caracter de salto de linea*/
	for (i = 0; *(token + i) != NULL; i++)
		for (j = 0; token[i][j] != '\0'; j++)
			if (token[i][j] == '\n')
				token[i][j] = '\0';



	/*ejecuta el programa pasado a la linea de comando*/
	if (execve(token[0], token, NULL) == -1)
	{
		perror("Error:");
	}
}
