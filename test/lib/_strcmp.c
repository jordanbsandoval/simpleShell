#include "main.h"

/**
 * _strcmp- function that compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: diference ascii between s1 and s2
 */

int _strcmp(const char *s1, const char *s2)
{
	int res = 0, i;

	for (i = 0; *(s1 + i) != '\0'; i++)
		if (*(s1 + i) != *(s2 + i))
			res = 1;

	return (res);
}
