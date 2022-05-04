#include "main.h"

int main(void)
{
	int i;
	pid_t hi;
	pid_t padre;

	padre = getpid();
	printf("%d\n", padre);

	i = 0;
	while (i < 5)
	{
		if (_crear_proceso(hi) == -1)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
