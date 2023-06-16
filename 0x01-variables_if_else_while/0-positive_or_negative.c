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
printf(n, "is postive");
}
else if (n == 0)
{
printf(n, "is zero");
}
else
{
printf(n, " is negative");
return (0);
}
