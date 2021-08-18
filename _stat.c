#include "main.h"

int main(int ac, char **av)
{
	//Variables
	char **tokens = malloc (1024);
	char *token = NULL, *delim = ":", aux[30];
	int stat_return = 0, i, j, k;
	struct stat st;

	
	if (tokens == NULL)
	{
		printf("malloc failed\n");
		return (1);
	}
	if (ac < 2)
	{
		printf("Usage: _which filename ...\n");
		return (2);
	}

	//Token-ize the PATH variable
	token = strtok(getenv("PATH"), delim);
	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	//Test if tokenization was correct
	/*for (i = 0; tokens[i]; i++)
		printf("%s, ", tokens[i]);
	printf("\n");*/

	//Tokens ready to be stcpy-ed

	for (i = 0; tokens[i]; i++)
	{
		//strcpy
		for (j = 0; tokens[i][j]; j++)
		{
			aux[j] = tokens[i][j];
		}
		//add slash
		aux[j] = '/';
		j++;
		//strcat
		for (k = 0; av[1][k]; k++, j++)
			aux[j] = av[1][k];
		aux[j] = '\0';
		//break; (this is part of the test)
		stat_return = stat(aux, &st);
		if (stat_return == 0)
		{
			printf("%s was found in %s\n", av[1], aux);
			break;
		}
	}
	if (stat_return != 0)
	{
		printf("%s was not found\n", av[1]);
		return(3);
	}
	printf("Function ended succesfully\n");
	//Test if aux was written correctly
	/*printf("aux: %s\n", aux);*/
	return (0);
}
