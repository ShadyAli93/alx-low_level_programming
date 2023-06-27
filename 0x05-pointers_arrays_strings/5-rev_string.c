#include "main.h"

/**
*rev_string - print pointer rev
*@s: variables
*
*
*/

void rev_string(char *s)
{
char rev = s[0];
int c = 0;
int r;
while (s[c] != '\0')
c++;
for (r = 0; r < c; r++)
c--;
rev = s[r];
s[r] = s[c];
s[c] = rev;
}
