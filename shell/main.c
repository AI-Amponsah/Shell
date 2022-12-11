#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - Entry point
 *@argc: Argument count
 *@argv: Argument vector
 *Return: Always 0
 *
*/

int main(int argc, char *argv[])
{
	/**
	  Declaring variabls
	  */
	int num_tokens = 0;
	int i;
	char *token;
	char *prompt = " :) ";
	char *lineptr= NULL, *cpy_lineptr = NULL;
	const char *delim = "\n";
	size_t n = 0;
	int  chars_read;
/**
  void variables */
	(void)argc, (void)argv;

	/**
	  creating an infinite loop */

	while (1)
	{
	printf("%s", prompt);
	chars_read = getline(&lineptr, &n, stdin);

	/** Exit clause */
	if (chars_read == -1)
	{
		printf("\n");
		return (-1);
	}
	printf("%s\n", lineptr);
	}
	 cpy_lineptr = malloc(sizeof(char)*chars_read);
	 if (cpy_lineptr == NULL)
	 {
		 return (-1);
	 }
	 strcpy(cpy_lineptr, lineptr);
	 token = strtok(cpy_lineptr, delim);

	 while(token != NULL)
	 {
		 num_tokens++;
		 token = strtok(NULL, delim);

	 }
	 num_tokens++;

	 argv = malloc(sizeof(char)*num_tokens);

	token = strtok(cpy_lineptr, delim);

	for (i = 0; token != NULL; i++)
	{
		argv[i] = malloc(sizeof(char)*strlen(token));
		strcpy(argv[i] , token);
		strtok(NULL, delim);
	}
	argv[i] = NULL;

	for 
	free(lineptr);
	free(cpy_lineptr);
	free(argv);
	return (0);
}
