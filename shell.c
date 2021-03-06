#include "holberton.h"
/**
 * main - Entry point of shell
 * @ac: unused parameter
 * @av: unused parameter
 * @env: extern eviron variable.
 *
 * Return: 0 success.
 */
int main(int ac __attribute__((unused)), char **av, char **env)
{
	char **array_tokens = NULL, **tokenized_path;
	char *line = NULL, *path;
	int position_line, built_in, search_return = 0, err_count = 1;

	errno = 0;
	path = get_path(env);
	tokenized_path = split_string(path);
	while (1)
	{
		line = prompt_get_line(tokenized_path, line);
		for (position_line = 0 ; line[position_line] != '\n'; position_line++)
			;
		line[position_line] = '\0';
		built_in = get_built_in(line, tokenized_path);
		if (built_in == 0)
			continue;
		array_tokens = split_string(line);
		if (array_tokens == NULL)
		{
			free(line);
			line = NULL;
			continue;
		}
		search_return = search_path(array_tokens, tokenized_path);
		if (search_return == 1)
		{
			print_error(av[0], array_tokens[0], err_count);
			err_count++;
		}
		free(array_tokens);
		free(line);
		line = NULL; }
	return (0); }
