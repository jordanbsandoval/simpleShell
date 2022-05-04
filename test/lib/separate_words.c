#include "main.h"

void _separate_words(char *str, char **token, const char *del)
{
	int i, j;
	ssize_t BUFSIZE;
	char *str_tmp = NULL;

	if (str == NULL || token == NULL)
	{
		perror("Funcion separate no funciono!");
	}

	BUFSIZE = _strlen(str);

	str_tmp = _create_array(BUFSIZE);
	if (str_tmp == NULL)
	{
		perror("error con malloc!");
	}

	for (i = 0, str_tmp = str; ; i++, str_tmp = NULL)
	{
		token[i] = strtok(str_tmp, del);
		if (token[i] == NULL)
		{
			break;
		}
	}

	/* Eliminando el caracter de salto de linea*/
	for (i = 0; *(token + i) != NULL; i++)
		for (j = 0; token[i][j] != '\0'; j++)
			if (token[i][j] == '\n')
				token[i][j] = '\0';
	free(str_tmp);
}
