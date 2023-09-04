#include "monty.h"

/**
 * free_stack - Frees a stack.
 * @stack: Double pointer to the top of the stack.
 */
void free_stack(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
