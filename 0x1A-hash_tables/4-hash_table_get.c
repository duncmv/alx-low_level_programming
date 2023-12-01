#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key you are looking for
 * Return: value associated with the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *list = NULL;

	if (!(ht == NULL || key == NULL || strlen(key) == 0))
		index = key_index((const unsigned char *)key, ht->size);
	else
		return (NULL);

	list = ht->array[index];

	while (list != NULL)
	{
		if (strcmp(list->key, key) == 0)
			return (list->value);
		list = list->next;
	}
	return (NULL);
}
