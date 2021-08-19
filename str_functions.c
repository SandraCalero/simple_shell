#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: a pointer destiny of src
 * @src: a pointer a string
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcpy -  copies the string pointed to by src
 * @dest: a pointer destiny of src
 * @src: a pointer a string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
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
/**
 * _strncmp - compares two strings.
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @len: Number of bytes to be counted
 *
 * Return: subtraction between s1 and s2
 */
int _strncmp(char *s1, char *s2, size_t len)
{
	size_t i = 0;
	int rest = s1[i] - s2[i];

	if (s1 == NULL || s2 == NULL)
	{
		return (-1);
	}
	while (rest == 0 && (s1[i] != '\0' || s2[i] != '\0') && i < (len - 1))
	{
		i++;
		rest = s1[i] - s2[i];
	}
	return (rest);
}

/**
 * _strcmp - compares two strings
 * @s1: first sitrng
 * @s2: second string
 * Return: an int greater, equal or less than 0 depending
 * on the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] - s2[i]) == 0 && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
