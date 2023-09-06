#include "monty.h"

/**
 * mod -computes the rest of the division of the second top element.
 * @line_number: Line number in the bytecode file.
 * @stack: Double pointer to the top of the stack.
 */

void mod(stack_t **stack, unsigned int line_number)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d:division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n % (*stack)->n;
	(*stack)->next->n = result;
	pop(stack, line_number);

}
