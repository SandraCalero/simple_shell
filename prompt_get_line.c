#include "holberton.h"
/**
  * prompt_get_line - prints the prompt and gets the command line or signal
  * @tokenized_path: path tokenized in directories
  * @line: command line
  *
  * Return: pointer to the command line
  */
char *prompt_get_line(char **tokenized_path, char *line)
{
	char *prompt = "$ ";
	size_t len_line = 0, len_prompt = _strlen(prompt);
	ssize_t num_chars_line = 0;

	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, prompt, len_prompt);
	num_chars_line = getline(&line, &len_line, stdin);
	if (num_chars_line < 0)
	{
		if (num_chars_line == EOF)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "\n", 1);
			free(tokenized_path);
			free(line);
			exit(0);
		}
		if (errno)
		{
			free(tokenized_path);
			free(line);
			exit(1);
		}
	}
	return (line);
}
