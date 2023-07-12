#include "main.h"
#include <stdlib.h>
/**
 * _strdup - newly allocated space in memory
 * @str: variable
 * Return: null and pntr
 */
char *_strdup(char *str)
{
char *pntr;
int len = 0, i;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
pntr = malloc(sizeof(char) * (len + 1));
if (pntr == NULL)
return (NULL);
for (i = 0; i < len; i++)
pntr[i] = str[i];
pntr[i] = '\0';
return (pntr);
}
