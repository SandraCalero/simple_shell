#include "holberton.h"
/**
 * main - Entry point of shell
 * @ac: unused parameter
 * @av: unused parameter
 * @env: extern eviron variable.
 *
 * Return: 0 success.
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)),
	 char **env)
{
	char **array_tokens = NULL, **tokenized_path;
	char *line = NULL, *path;
	int position_line, built_in;

	errno = 0;
	path = get_path(env);
	tokenized_path = split_string(path);
	while (1)
	{
		line = prompt_get_line(tokenized_path, line);
		for (position_line = 0 ; line[position_line] != '\n'; position_line++)
			;
		line[position_line] = '\0';
		built_in = get_built_in(line, env, tokenized_path);
		if (built_in == 0)
			continue;
		array_tokens = split_string(line);
		if (array_tokens == NULL)
		{
			free(line);
			line = NULL;
			continue;
		}
		search_path(array_tokens, tokenized_path);
		free(array_tokens);
		free(line);
		line = NULL; }
	return (0); }
