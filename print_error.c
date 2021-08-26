#include "holberton.h"
/**
  * print_error - prints error message
  * @first_av: Name of file av[0]
  * @first_token: First token in the command line
  * @err_count: Count of the errors
  *
  * Return: Nothing.
  */
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
/**
 * print_number - prints an integer
 * @n: Given integer
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int i, current_digit;

	/* Edge case n is cero */
	if (n == 0)
	{
		_putchar('0');

	}
	/* Case for negative integer: print '-' and turn int to positive */
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	/* Finds the power of the integer*/
	for (i = 1; n / i > 9; i = i * 10)
	{
	}
	/* Prints each digit */
	for (; i > 0; i = i / 10)
	{
		current_digit = n / i;
		n = n % i;
		_putchar('0' + current_digit);
	}
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
