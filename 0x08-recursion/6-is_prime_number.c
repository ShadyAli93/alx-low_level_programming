#include "main.h"

/**
 * prime_number - primenumber
 * @x: variable
 * @y: variable
 * Return: 1 and 0
 */
int prime_number(int x, int y)
{
if (y == 1)
return (1);
else if (x % y == 0 && x > 0)
return (0);
return (prime_number(x, y + 1));
}
/**
 * is_prime_number - primenumber
 * @n: variable
 * Return: 1 and n
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_number(n, 1));
}
