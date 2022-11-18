# Monty Project - Stacks, Queues - LIFO, FIFO
  
[![Monty.jpg](https://i.postimg.cc/R0xgc2hK/Monty.jpg)](https://postimg.cc/fV57s2xR)
	"Good Luck!" ~ Monty

## Description :teacher:

* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables

## Data Structures :dna:

```
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```

## Compilation :wrench:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty
```

## Resources  :technologist:

YouTube  |  (https://www.youtube.com/watch?v=wjI1WNcIntg)

StackOverflow  |  (https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)

Google  |  (https://www.google.com/webhp?q=stack%20and%20queue)


### Author :memo::pencil:
 
Clint Hendrickson | (https://github.com/Maitreya-today)
