#include "holberton.h"
/**
 * main - prints prompt and wait for a command
 *
 * Return: 0 success.
 */
int main(void)
{
	char *prompt = "$ ";
	size_t len_prompt = _strlen(prompt);
	char *line = NULL;
	size_t len_line = 0;
	ssize_t num_chars_line = 0;
	errno = 0;

	while (1)
	{
		write(STDOUT_FILENO, prompt, len_prompt);
		num_chars_line = getline(&line, &len_line, stdin);
		if (num_chars_line < 0)
		{
			if (errno)
			{
				perror("This command is not correct");
			}
			else if (num_chars_line == EOF)
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			free(line);
			exit(1);
		}
		write(STDOUT_FILENO, line, num_chars_line);
	}
	return (0);
}
