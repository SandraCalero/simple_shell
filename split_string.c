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
	const char *delimit = " :";
	unsigned int len_array = 0;
	char *token;
	char **array_tokens = malloc(1024);

	if (array_tokens == NULL)
	{
		free(array_tokens);
		perror("Error message for array_tokens");
		exit(1);
	}
	token = strtok(text, delimit);
	while (token != NULL)
	{
		array_tokens[len_array] = token;
		len_array++;
		if (len_array >= 1024)
		{
			array_tokens = realloc(array_tokens, 1024);
			if (array_tokens == NULL)
			{
				free(array_tokens);
				perror("Error message for realloc array");
				exit(1);
			}
		}
		token = strtok(NULL, delimit);
	}
	array_tokens[len_array] = NULL;
	return (array_tokens);
}
