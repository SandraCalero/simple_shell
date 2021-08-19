#include "holberton.h"
/**
 * get_built_in - selects the corresponding to the according to the selected
 * built-in.
 * @array_tokens: contain the built-in name.
 *
 * Return: A pointer to the function that corresponds to the built-in
 * given as a parameter.
 * If @array_tokens does not match any of the them return NULL.
 */
void (*get_built_in(char *array_tokens))()
{
	int compare, len_built_in_name;
	list_built_in array_built_in[] = {
		/*{"exit", _exit},*/
		{"env", _env},
		{NULL, NULL}
		};
	int i = 0;
	int len;

	for (len = 0 ; array_built_in[len].built_in_name != NULL ; len++)
		;
	while (i < len)
	{
		len_built_in_name = _strlen(array_built_in[i].built_in_name);
		
		compare = _strncmp(array_tokens, array_built_in[i].built_in_name
				   , len_built_in_name);
		
		if (compare == 0)
			return (array_built_in[i].built_in_function);
		i++;
	}
	return (NULL);
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
