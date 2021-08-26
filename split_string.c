#include "holberton.h"
/**
 * split_string - splits a spring
 * @text: The string to be splited
 *
 * Return: A pointer that points to a pointer to each string obtained.
 * If an error happens prints an error message.
 */
char **split_string(char *text)
{
	const char *delimit = " :\t";
	unsigned int len_array = 0, arr_size = 1024, new_size = arr_size;
	char *token;
	char **array_tokens = malloc(arr_size);

	if (array_tokens == NULL)
	{
		free(array_tokens);
		exit(EXIT_FAILURE);
	}
	token = strtok(text, delimit);
	if (token == NULL)
	{
		free(array_tokens);
		return (NULL);
	}
	while (token != NULL)
	{
		array_tokens[len_array] = token;
		len_array++;
		if (len_array >= arr_size)
		{
			new_size = new_size + arr_size;
			array_tokens = _realloc(array_tokens, arr_size, new_size);
			if (array_tokens == NULL)
			{
				free(array_tokens);
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, delimit);
	}
	array_tokens[len_array] = NULL;
	return (array_tokens);
}
