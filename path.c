#include "holberton.h"
/**
  * search_path - use stat function to search the command
  * entered in the prompt
  * @array_tokens: Command line entered by standard input
  * @tokenized_path: Array of tokens with each directory
  * of the path
  *
  * Return: Nothing.
  */
int search_path(char **array_tokens, char **tokenized_path)
{
	char *aux = malloc(1024);
	int i, j, stat_return = 0;
	struct stat st;

	for (i = 0; tokenized_path[i] != NULL; i++)
	{
		_strcpy(aux, tokenized_path[i]);
		for (j = 0; aux[j]; j++)
			;
		aux[j] = '/';
		aux[j + 1] = '\0';
		aux = _strcat(aux, array_tokens[0]);
		stat_return = stat(aux, &st);
		if (stat_return == 0)
		{
			array_tokens[0] = aux;
			execute_proccess(array_tokens);
			free(aux);
			errno = 0;
			return (0);
		}
	}
	stat_return = stat(array_tokens[0], &st);
	if (stat_return == 0)
	{
		execute_proccess(array_tokens);
		free(aux);
		errno = 0;
		return (0);
	}	
	free(aux);
	errno = 0;
	return (1);
}
/**
  * get_path - gets the path from the env pointer
  * @env: pointer to enviromental variables
  * Return: pointer to the value of PATH
  */
char *get_path(char **env)
{
	char *path_value;
	int i, compare;

	for (i = 0; env[i]; i++)
	{
		compare = _strncmp(env[i], "PATH", _strlen("PATH"));
		if (compare == 0)
		{
			path_value = env[i];
			for (i = 0; path_value[i] != '/'; path_value++)
				;
			return (path_value);
		}
	}
	return (NULL);
}

void print_error(char *first_av, char *first_token, int err_count)
{
	write(STDOUT_FILENO, first_av, _strlen(first_av));
	write(STDOUT_FILENO, ": ", 2);
	print_number(err_count);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, first_token, _strlen(first_token));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "not found", 9);
	write(STDOUT_FILENO, "\n", 1);
}
