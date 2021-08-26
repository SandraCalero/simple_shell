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
