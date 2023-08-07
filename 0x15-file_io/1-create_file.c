#include "main.h"

/**
 * create_file - create
 *@filename: variable
 *@text_content: variable
 *Return: -1 and 1
*/
int create_file(const char *filename, char *text_content)
{
int fd;
int c;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
while (text_content[c] != 0)
{
write(fd, text_content, c);
c++;
}
close(fd);
return (1);
}
