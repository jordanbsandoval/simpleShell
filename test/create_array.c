#include "main.h"

char *create_array(size_t BUFSIZE)
{
	char *new_array = NULL;

	new_array = malloc(sizeof(char) * BUFSIZE);
	if (new_array == NULL)
		return (NULL);
	return (new_array);
}
