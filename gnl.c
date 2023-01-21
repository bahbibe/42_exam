#include <unistd.h>
#include <stdlib.h>

char *get_next_line(int fd)
{
	int i = 0, buffer = '\0';
	char *rtn = malloc(8000);
	while(fd >= 0 && BUFFER_SIZE > 0 && buffer != '\n' && read(fd, &buffer, 1) > 0) rtn[i++] = buffer, rtn[i] = 0;
	if (!i) free(rtn);
	return (i ? rtn : 0);
}
