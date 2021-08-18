#include "holberton.h"
/**
 * execute_proccess - creates a child procces and executes a command in this.
 * @argv: The ponter that point to a pointer thar points to an array of strings
 *
 * Return: Nothing.
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
			perror("hsh: 1: command not found");
		}
		_exit(0);
	}
	else
		wait(NULL);
}
