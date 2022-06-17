#include <main.h>


/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("hijordan %u\n", my_pid);
	my_pid = getppid();
	printf("padre %u\n", my_pid);
	return (0);
}
