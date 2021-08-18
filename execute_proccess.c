#include "holberton.h"
/**
 * main - execve example
 *
 * Return: Always 0.
 */
void execute_proccess(char **argv)
{
	pid_t child_pid;
	int exreturn;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		exit(0);
	}
	if (child_pid == 0)
	{
		exreturn = execve(argv[0], argv, NULL);
		if (exreturn == -1)
		{
			perror("Error: in execve");
		}
		_exit(0);
	}
	else
		wait (NULL);
}
