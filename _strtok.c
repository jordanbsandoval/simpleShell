#include "main.h"

/**
 * main- function that splits a string and returns an array of each word of the string.
 * 
 *
 */

char *array_words[](void)
{
	const char *del = " ";
	char *buff = NULL, *token, *token2;
	char *str1, *str2;
	int j;

	buff = malloc(sizeof(char) * bufsize);
	if (buff == NULL)
		return (-1);

	printf("($)");
	count = getline(&buff, &bufsize, stdin);

	for (j = 1, str1 = buff; ; j++, str1 = NULL) {
		token = strtok(str1, del);
		if (token == NULL)
			break;
		printf("%d: %s\n", j, token);

		/*for (str2 = token; ; str2 = NULL) {
			token2 = strtok(str2, argv[3], &saveptr2);
			if (subtoken == NULL)
				break;
			printf(" --> %s\n", subtoken);
		}*/
	}


	free(buff);
	return (0);
}

