#include "function_pointers.h"

/**
 * print_name - PrintName
 * @name: variable
 * @f: variable
 * Return: pntr
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
