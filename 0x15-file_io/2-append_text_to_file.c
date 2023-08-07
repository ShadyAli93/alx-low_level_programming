#include "main.h"

/**
 * append_text_to_file - appened
 *@filename: variable
 *@text_content: variable
 *Return: -1 and 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int a = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
text_content = "";
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
while (text_content[a] != 0)
{
a++;
}
write(fd, text_content, a);
close(fd);
return (1);
}

