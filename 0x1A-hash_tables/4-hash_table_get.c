#include "hash_tables.h"

/**
 * hash_table_get - get
 *
 * @ht: variable
 * @key: variable
 *
 * Return:  NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *temp = NULL;
unsigned long int i, index;
if ((strcmp(key, "") == 0) || ht == NULL)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
for (i = 0; temp; i++)
{
if (strcmp(key, temp->key) == 0)
{
return (temp->value);
}
temp = temp->next;
}
return (NULL);
}
