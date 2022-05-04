#include "main.h"

/**
 * create_array- function that creates an array of chars.
 *@size: size of the array created
 *Return: pointer to the new array created
 */

char *_create_array(size_t size)
{
	char *new_array = NULL;
	new_array = malloc(sizeof(char) * size);

	if (new_array == NULL)
		return (NULL);

	return (new_array);
}
