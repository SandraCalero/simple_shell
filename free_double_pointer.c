#include "holberton.h"

/**
 * free_double_pointer - frees a double pointer.
 * @douPtr: Pointer to a pointer that has to be freed.
 *
 * Return: Nothing.
 */
void free_double_pointer(char **douPtr)
{
	int i;

	if (douPtr == NULL)
		return;
	while (douPtr[i] != NULL)
	{
		free(douPtr[i]);
		i++;
	}
	free(douPtr[i]);
	free(douPtr);
}
