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

/*These functions are in individual files*/
char **split_string(char *text);
void execute_proccess(char **argv);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/*These functions are in the file path*/
void search_path(char **array_tokens, char **tokenized_path);
char *get_path(char **env);

/*These functions are in the file built_in_functions*/
int get_built_in(char *s, char **env, char **tokenized_path);
void _env(char **env);

/*These functions are in the file str_functions*/
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t len);

#endif /* HOLBERTON_H */
