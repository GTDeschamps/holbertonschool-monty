#include "monty.h"

/**
 * rotr -computes the rest of the division of the second top element.
 * @line_number: Line number in the bytecode file.
 * @stack: Double pointer to the top of the stack.
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *ptr;
	stack_t *ptr2;

	ptr = *stack;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr2 = ptr->prev;
		ptr2->next = NULL;
		ptr->prev = NULL;
		ptr->next = *stack;
		(*stack)->prev = ptr;
		*stack = ptr;
	}
}
