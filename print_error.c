#include "holberton.h"
/**
  * print_error - prints error message
  * @first_av: First argument of the command line
  * @first_token: first token
  * @err_count: count of the errors
  */
void print_error(char *first_av, char *first_token, int err_count)
{
	write(STDOUT_FILENO, first_av, _strlen(first_av));
	write(STDOUT_FILENO, ": ", 2);
	print_number(err_count);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, first_token, _strlen(first_token));
	write(STDOUT_FILENO, ": ", 2);
	if (errno != 0)
		perror("");
	else
		write(STDOUT_FILENO, "not found", 9);
	write(STDOUT_FILENO, "\n", 1);
}
#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: given integer
 * Return: void
 */
void print_number(int n)
{
	int aux = n, i = 0, j = 0, a = 1;

	if (n < 0)
	{
		_putchar(45);
	}

	while (aux > 9 || aux < -9)
	{
		aux = aux / 10;
		i++;
	}

	while (i > 0)
	{
		while (j < i)
		{
			a = a * 10;
			j++;
		}
		if (n < 0)
			_putchar('0' + -(n / a));
		else
			_putchar('0' + (n / a));
		i--;
		n = n % a;
		j = 0;
		a = 1;
	}
	if (n < 0)
		_putchar('0' + -n);
	else
		_putchar('0' + n);
}
