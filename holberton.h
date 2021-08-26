#ifndef HOLBERTON_H
#define HOLBERTON_H

extern char **environ;

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
char *prompt_get_line(char **tokenized_path, char *line);
char **split_string(char *text);
void execute_proccess(char **argv);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
void print_number(int n);

/*These functions are in the file path*/
int search_path(char **array_tokens, char **tokenized_path);
char *get_path(char **env);
void print_error(char *first_av, char *first_token, int err_count);

/*These functions are in the file built_in_functions*/
int get_built_in(char *s, char **tokenized_path);
void _env(void);

/*These functions are in the file str_functions*/
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t len);

#endif /* HOLBERTON_H */
