#include "push_swap.h"
#include <stdio.h>

int main()
{
	int fd;
	char *line;
	int l;

	fd = open("checker.c", O_RDONLY);
	if (fd == -1)
		return (1);
	while ((l = get_next_line(0, &line)) == 1)
	{
		printf("%s\n", line);
		printf("gnl return: %d\n", l);
		free(line);
	}
	return (0);
}