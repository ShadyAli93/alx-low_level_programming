#include "hash_tables.h"

/**
 * key_index - Key
 * @key: variable
 * @size:  variable
 * Return: preHash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int preHash = hash_djb2(key);
return (preHash % size);
}
