#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: double pointer
 * Return: the actual number of letters it could read and print
 */
int main(int argc, char **argv)
{
int from, to, n;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
from = open(argv[1], O_RDONLY);
if (from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
while ((n = read(from, buf, 1024)) > 0)
{
if (write(to, buf, n) != n || to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (n == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(from) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
exit(100);
}
if (close(to) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
exit(100);
}
return (0);
}
