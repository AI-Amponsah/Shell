#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	(void)ac;
	if (av[0] == NULL)
		return (-1);
	else
	{
		for ( i = 0; av[i] != NULL; i++)
		{
			printf("%s\n", av[i]);
		}
	}
	return (0);
}
