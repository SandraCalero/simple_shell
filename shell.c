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
	char *prompt = "$ ", *line = NULL;
	size_t len_prompt = _strlen(prompt), len_line = 0;
	ssize_t num_chars_line = 0;
	int position_line, built_in;
	char **array_tokens = NULL;

	errno = 0;
	while (1)
	{
		write(STDOUT_FILENO, prompt, len_prompt);
		num_chars_line = getline(&line, &len_line, stdin);
		if (num_chars_line < 0)
		{
			if (errno)
				perror("This command is not correct");
			else if (num_chars_line == EOF)
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			free(line);
			exit(1);
		}
		for (position_line = 0 ; line[position_line] != '\n'; position_line++)
			;
		line[position_line] = '\0';
		array_tokens = split_string(line);
		built_in = get_built_in(array_tokens[0], env);
		if (built_in == 0)
			continue;
		execute_proccess(array_tokens);
	}
	return (0);
}
