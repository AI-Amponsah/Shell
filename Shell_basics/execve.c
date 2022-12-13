#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *av[] = {"/usr/bin/ls", "-l", NULL};

	if (execve(av[0], av, NULL) == -1)
		perror("Error");
	printf("done");
	return (0);
}
