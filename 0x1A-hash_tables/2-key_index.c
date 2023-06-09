#include "hash_tables.h"

/**
 * key_index - uses hash_djb2 to get the index at which a key/value pair
 *	should be stored in array of a hash table.
 * @key: The key to the value on a hash table.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
