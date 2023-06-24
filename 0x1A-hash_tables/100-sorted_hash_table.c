char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp_node = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[index];

	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
			return (tmp_node->value);
		tmp_node = tmp_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 *
 * @ht: the hash table to print
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp_node = NULL;
	char *comma = "";

	if (ht)
	{
		printf("{");
		tmp_node = ht->shead;

		while (tmp_node)
		{
			printf("%s", comma);
			comma = ", ";

			if (tmp_node->key)
				printf("'%s': '%s'", tmp_node->key, tmp_node->value);

			tmp_node = tmp_node->snext;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - rev prints a hash table
 *
 * @ht: the hash table to print
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp_node = NULL;
	char *comma = "";

	if (ht)
	{
		printf("{");
		tmp_node = ht->stail;

		while (tmp_node)
		{
			printf("%s", comma);
			comma = ", ";

			if (tmp_node->key)
				printf("'%s': '%s'", tmp_node->key, tmp_node->value);

			tmp_node = tmp_node->sprev;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: the hash table to delete
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp_node = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		while (index < ht->size)
		{
			while (ht->array[index])
			{
				tmp_node = ht->array[index];
				ht->array[index] = ht->array[index]->next;

				if (tmp_node->value)
					free(tmp_node->value);
				if (tmp_node->key)
					free(tmp_node->key);
				free(tmp_node);
			}
			free(ht->array[index]);
			index++;
		}
		free(ht->array);
		free((void *)ht);
	}
}
