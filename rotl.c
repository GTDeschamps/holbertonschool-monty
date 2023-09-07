#include "monty.h"

/**
 * rotl -computes the rest of the division of the second top element.
 * @line_number: Line number in the bytecode file.
 * @stack: Double pointer to the top of the stack.
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *ptr;
	stack_t *ptr2;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		ptr = *stack;
		ptr2 = (*stack)->next;

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr2->prev = NULL;

		ptr->next = *stack;
		(*stack)->prev = ptr;

		(*stack)->next = NULL;
		*stack = ptr2;
	}
}
