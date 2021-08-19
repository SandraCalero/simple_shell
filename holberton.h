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

char **split_string(char *text);
void execute_proccess(char **argv);
void free_double_pointer(char **douPtr);

/*These functions are in the file built_in_functions*/
int get_built_in(char *s, char **env);
void _env(char **env);

/*These functions are in the file str_functions*/
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t len);

#endif /* HOLBERTON_H */
