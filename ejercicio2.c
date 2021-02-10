#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	char c[11];
	int d1 = open(argv[1], O_RDONLY, 0);
	int d2 = open(argv[2], O_RDONLY, 0);
	read(d1, c, sizeof(c));
	printf("%s\n", c);
	close(d1);
	write(d2, c, strlen(c));
	close(d2);
	exit(0);
}
