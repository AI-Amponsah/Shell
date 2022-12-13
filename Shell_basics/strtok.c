#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac , char **av)
{
	int i, char_read;
	char *delim = " ";
	char *token;
	char *command;
	size_t n;

	(void)ac;

	printf(":");
	 char_read = getline(&command, &n, stdin);
	 av = malloc(sizeof(char)*char_read);

	token = strtok(command, delim);
	for (i = 0;  token != NULL; i++)
	{
		av[i] = malloc(sizeof(char)*strlen(token));
		strcpy(av[i], token);
		printf("%s\n",token);
		token = strtok(NULL, delim);
	}
	free(av);
	free(command);

	return (0);
}
