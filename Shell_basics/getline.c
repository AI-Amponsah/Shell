#include <stdio.h>

int main (void)
{
	char *input;
	size_t n;
	int input_read;
	printf("$");
	input_read = getline(&input, &n, stdin);
	if (input_read == -1)
	{
		return (-1);
	}
	else 
		printf("%s", input);

	return (0);
}
