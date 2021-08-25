#include "holberton.h"
/**
 * get_built_in - selects the corresponding to the according to the selected
 * built-in.
 * @line: Pointer to a string to be compared with built-ins.
 * @tokenized_path: Array of tokens with each directory
 * of the path.
 *
 * Return: 0 if the built-in is founded, -1 if not.
 */
int get_built_in(char *line, char **tokenized_path)
{
	char built_in_env[] = "env";
	char built_in_exit[] = "exit";

	if (_strcmp(line, built_in_exit) == 0)
	{
		free(line);
		free(tokenized_path);
		exit(0);
	}
	else if (_strcmp(line, built_in_env) == 0)
	{
		_env();
		free(line);
		line = NULL;
		return (0);
	}
	else
		return (-1);
}
/**
 * _env - prints the environment
 *
 * Return: Nothing.
 */
void _env(void)
{
	unsigned int i;

	i = 0;
	while (environ[i] != NULL)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		i++;
		write(STDOUT_FILENO, "\n", 1);
	}
}
