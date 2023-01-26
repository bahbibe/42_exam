#include <unistd.h>
#include <stdlib.h>
char *get_next_line(int fd)
{
	char *str = malloc(10000), *buf = str;
	while (BUFFER_SIZE && read(fd, buf, 1) > 0 && *buf++ != 10);
	return (buf > str) ? (*buf = 0, str) : (free(str), NULL);
}
