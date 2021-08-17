#include "holberton.h"
/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	int child_pid;
	int exreturn;
	int i;

	for (i = 0 ; i < 5 ; i++)
	{
		child_pid = fork();
		if(child_pid == 0)
		{
			printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid());
			exreturn = execve(argv[0], argv, NULL);
			if (exreturn == -1)
			{
				perror("Error: in execve");
			}
			_exit(0);
		}
		wait (NULL);
	}
	return (0);
}
