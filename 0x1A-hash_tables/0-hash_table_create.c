#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: pointer to created hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	if (size == 0)
	{
		return (NULL);
	}
	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
	{
		return (NULL);
	}

	new_ht->size = size;
	new_ht->array = malloc(size * sizeof(hash_node_t *));
	if (new_ht->array == NULL)
	{

		return (NULL);
	}
return (new_ht);
}
