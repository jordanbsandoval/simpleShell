#include "main.h"

int main(void)
{
	int i;
	pid_t hijo;
	pid_t padre;

	padre = getpid();
	printf("%d\n", padre);

	i = 0;
	while (i < 5)
	{
		crear_proceso(hijo);
		i++;
	}
	return (0);
}
