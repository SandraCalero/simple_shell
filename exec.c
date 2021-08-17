#include "holberton.h"
/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	int exreturn;
	int i;

	for (i = 0 ; i < 5 ; i++)
	{
		if(fork() == 0)
		{
			printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid());
			exreturn = execve(argv[0], argv, NULL);
			if (exreturn == -1)
			{
				perror("Error: in execve");
			}
			exit(0);
		}
	}
	for (i = 0 ; i < 5 ; i++)
	{
		wait (NULL);
		}
	return (0);
}
