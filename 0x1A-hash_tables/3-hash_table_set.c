#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to update
 * @key: Key
 * @value: value linked to key
 * Return: 1 if success or 0 if it fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_el, *temp;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	new_el = malloc(sizeof(hash_node_t));
	if (new_el == NULL)
		return (0);
	for (temp = ht->array[idx]; temp; temp = temp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(new_el);
			return (1);
		}
	}
	new_el->key = strdup(key);
	new_el->value = strdup(value);
	new_el->next = ht->array[idx];
	ht->array[idx] = new_el;
	return (1);
}
