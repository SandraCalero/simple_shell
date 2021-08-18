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

int _strlen(char *s);
char **split_string(char *text);
void execute_proccess(char **argv);
void free_double_pointer(char **douPtr);

#endif /* HOLBERTON_H */
