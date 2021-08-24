#include "holberton.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previusly allocated
 * @old_size: The size of ptr
 * @new_size: The size of the required pointer
 *
 * Return: Pointer with new memory allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_space, *copy_ptr = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_space = malloc(new_size);
		return (new_space);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new_space = malloc(new_size);
	if (new_space == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		new_space[i] = copy_ptr[i];
	free(ptr);
	return (new_space);
}
