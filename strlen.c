#include "holberton.h"
/**
 * _strlen -  returns the length of a string
 * @s: A pointer to a string we want to know the length
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int size;

	for (size = 0 ; s[size] != '\0' ; size++)
	{
		;
	}
	return (size);
}
