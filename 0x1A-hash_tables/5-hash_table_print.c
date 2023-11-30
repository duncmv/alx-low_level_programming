#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int toggle = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				if (toggle == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				toggle = 1;
				node = node->next;
			}
		}
		i++;
	}
	printf("}\n");
}
