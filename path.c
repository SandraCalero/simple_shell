#include "holberton.h"

/**
  * search_path - use stat function to search the command
  * entered in the prompt
  * @first_arg: command entered
  * @tokenized_path: array of tokens with each directory
  * of the path
  * Return: pointer with the path of the enterede command
  */

void search_path(char **array_tokens, char **tokenized_path)
{
	char *aux = malloc(50);
	int i, j, stat_return = 0;
	struct stat st;

	for (i = 0; tokenized_path[i]; i++)
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
			array_tokens[0] = aux;/**/
			execute_proccess(array_tokens);/**/
			free(aux);/**/
			errno = 0;
			return; /**/
		}
	}
	perror("hsh: 1: command not found");
	free(aux);/**/
	errno = 0;
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
