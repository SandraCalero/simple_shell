#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

/**
 * struct list_built_in - Structure of a list of built-ins
 * @built_in_name: Name of a built-in
 * @built_in_function: Pointer to the corresponding function
 */

typedef struct list_built_in
{
	char *built_in_name;
	void (*built_in_function)();
} list_built_in;

char **split_string(char *text);
void execute_proccess(char **argv);
void free_double_pointer(char **douPtr);

/*These functions are in the file built_in_functions*/
void (*get_built_in(char *array_tokens))();
void _env(char **env);

/*These functions are in the file str_functions*/
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strncmp(char *s1, char *s2, size_t len);

#endif /* HOLBERTON_H */
