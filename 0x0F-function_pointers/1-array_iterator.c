#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - array
 * @array: variable
 * @size: variable
 * @action: variable
 * Return: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != 0 && action != 0)
for (i = 0; i < size; i++)
action(array[i]);
}
