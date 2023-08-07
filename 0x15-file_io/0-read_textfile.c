#include "main.h"

/**
 * read_textfile - read
 *@filename: variable
 *@letters: variable
 *Return: 0 and 1
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t r;
ssize_t w;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
r = read(fd, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);
close(fd);
return (w);
}

