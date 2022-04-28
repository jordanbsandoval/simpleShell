#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main- get the id of the process current
 *
 * Return: 0 always.
 */

int main(void)
{
	pid_t pid_ac, ppid;

	pid_ac = getpid();
	ppid = getppid();
	printf("proceso actual id: %u\n", pid_ac);
	printf("proceso padre id: %u\n", ppid);
	return (0);
}
