#include "main.h"

/**
 * square_root - sqr_root
 * @x: variable
 * @y: variable
 * Return: y and -1
 */
int square_root(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (square_root(x, y + 1));
}
/**
 * _sqrt_recursion - sqr_root
 * @n: Number Integer
 * Return: 1 and n
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
