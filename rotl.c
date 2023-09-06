#include "monty.h"

/**
 * rotl -computes the rest of the division of the second top element.
 * @line_number: Line number in the bytecode file.
 * @stack: Double pointer to the top of the stack.
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	int temp;
	stack_t *ptr;

	ptr = *stack;

	if (*stack != NULL || (*stack)->next != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		temp = ptr->n;
		ptr->n = (*stack)->n;
		(*stack)->n = temp;
	}
}
