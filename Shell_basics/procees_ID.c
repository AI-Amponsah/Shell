#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	printf("child PID is: %u\n", getpid());
	printf("parent PID is: %u\n", getppid());

	return (0);
}
