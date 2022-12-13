#include <stdio.h>
#include <string.h>



int main(void)
{
	int i = 0;
	int j;
	char string[] = "Hello, my name is Isaac Amponsah";
	char *delim = " ";
	char *token[30];

	token[0] = strtok(string, delim);
	i++;

	while ( token[i] != NULL)
	{
		token[i] = strtok(NULL, delim);
		i++;
	}
	j = 0;
	for (j = 0; token[j] != NULL; j++)
	{
		printf("%s\n", token[j]);
	}


	return (0);
}
