#ifndef FUNCS
#define FUNCS
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stddef.h>
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
/*0-push_pall.c*/
void  process_file(FILE *file);
instruction_t search_opcode(char *opcode);
char **token_line(char *line);
int get_num_words(char *line);
int validate_spaces(char *input);
/*free.c*/
void free_nodes(stack_t *head);
/*functions to execute the opcode*/
stack_t *add_node(stack_t **head, const int n);
size_t print_list(stack_t *h);
int pop(stack_t **head);
int delete(stack_t **head, unsigned int index);
int swap_first_ones(stack_t **h);
int sum_first_ones(stack_t **h);
/*monty_list1.c - opcode functions*/
void monty_push(stack_t **stack, char *value, unsigned int line_number);
void monty_pall(stack_t **stack, unsigned int line_number);
/*monty_list2.c - opcode functions*/
void monty_pint(stack_t **stack, unsigned int line_number);
void monty_pop(stack_t **stack, unsigned int line_number);
void monty_swap(stack_t **stack, unsigned int line_number);
void monty_add(stack_t **stack, unsigned int line_number);
void monty_nop(stack_t **stack, unsigned int line_number);

int is_integer(char *buf);
#endif
