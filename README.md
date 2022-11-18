# Monty Project - Stacks, Queues - LIFO, FIFO
[![Monty.jpg](https://i.postimg.cc/8k2fPW5h/Monty.jpg)](https://postimg.cc/7bNZK5S6)


## Description :teacher:

1. What is a hash function
2. What makes a good hash function
3. What is a hash table, how do they work and how to use them
4. What is a collision and what are the main ways of dealing with collisions in the context of a hash table
5. What are the advantages and drawbacks of using hash tables
6. What are the most common use cases of hash tables

## Data Structures :dna:

```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

### Compilation :wrench:
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89
```

## Resources  :technologist:

YouTube  |  (https://www.youtube.com/watch?v=MfhjkfocRR0)

Wiki  |  (https://en.wikipedia.org/wiki/Hash_function)

Wiki  |  (https://en.wikipedia.org/wiki/Hash_table)


### Author :memo::pencil:
 
Clint Hendrickson | (https://github.com/Maitreya-today)
