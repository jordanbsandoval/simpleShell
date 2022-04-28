#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	size_t count = 0, bufsize = 40;
	char *buff = NULL;

	buff = malloc(sizeof(char) * bufsize);
	if (buff == NULL)
		return (-1);

	printf("($)");
	count = getline(&buff, &bufsize, stdin);
	printf("%zu characters were read\n", count);
	printf("%s", buff);
	free(buff);
	return (0);
}
