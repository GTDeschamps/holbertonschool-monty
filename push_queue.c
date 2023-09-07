#include "monty.h"

/**
 * push_queue - Pushes an element onto the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the bytecode file.
 */
void push_queue(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	stack_t *ptr;
	char *token;

	token = strtok(NULL, " \n"); /* Get the argument after "push" */

	if (token == NULL || !is_number(token))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(token);
	new_node->next = NULL;

	if (*stack == NULL)
	{
		new_node->prev = NULL;
		*stack = new_node;
	}
	else
	{
		ptr = *stack;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
		new_node->prev = ptr;
	}
}
