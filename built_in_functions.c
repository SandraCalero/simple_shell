#include "holberton.h"
/**
 * get_built_in - selects the corresponding to the according to the selected
 * built-in.
 * @s: Pointer to a string to be compared with built-ins.
 * @env: extern environ variable.
 *
 * Return: 0 if the built-in is founded, -1 if not.
 */
int get_built_in(char *s, char **env, char **tokenized_path)
{
	char built_in_env[] = "env";
	char built_in_exit[] = "exit";

	if (_strcmp(s, built_in_exit) == 0)
	{
		free(s);
		free(tokenized_path);
		exit(0);
	}
	else if (_strcmp(s, built_in_env) == 0)
	{
		_env(env);
		return (0);
	}
	else
		return (-1);
}
/**
 * _env - prints the environment
 * @env: environ variable.
 *
 * Return: Nothing.
 */
void _env(char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		i++;
		write(STDOUT_FILENO, "\n", 1);
	}
}
