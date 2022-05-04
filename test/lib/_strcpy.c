#include "main.h"

/**
 * _strcpy- copies the string pointed by src to the buffer pointed by dest.
 * @dest: pointer to copy
 * @src: pointer from copy
 * Return: pointer to dest
 */

char *_copy(char *dest, char *src)
{
	char *tmp = dest;

	for (; (*(dest) = *(src)) != '\0'; dest++, src++)
		;
	return (dest = tmp);
}
