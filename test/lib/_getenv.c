#include "main.h"

/**
 * _getenv- Write a function that gets an environment variable.
 * @s: pointer to string. name of the variable to search
 * Return: pointer to the variable get for path
 */

char *_getenv(const char *s)
{
	extern char **environ;
	unsigned int i, j, ancho;
	char *str_var = NULL, *line_env = NULL;
	char *var_val[3];

	if (s == NULL)
		return (NULL);

	ancho = _strlen(s);
	str_var = malloc(sizeof(char) * ancho);
	if (str_var == NULL)
		return (NULL);

	i = 0;
	while (environ[i])
	{
		j = 0;
		/*obtiene el nombre de la variable de entrno*/
		while (environ[i][j] != '=')
		{
			*(str_var + j) = environ[i][j];
			j++;
		}
		*(str_var + j) = '\0';
		/*comparo si ambos son iguales*/
		if (_strcmp(s, str_var) == 0)
		{
			break;
		}
		i++;
	}
	free(str_var);
	return(environ[i]);
}
