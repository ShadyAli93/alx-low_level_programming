#include <stdlib.h>
#include <time.h>
/**
 * main - if condition
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf(n, "%d is postive\n");
}
else if (n == 0)
{
printf(n, "%d is zero\n");
}
else
{
printf(n, "%d is negative\n");
return (0);
}
