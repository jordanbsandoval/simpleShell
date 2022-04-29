#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * main- prints the PID of the parent process
 *
 * Return: print number PID of the parent process
 */

int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("%u\n", ppid);
	return (0);
}
