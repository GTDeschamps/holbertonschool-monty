#include "monty.h"

/**
 * mul - Multiplies the top two elements of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the bytecode file.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n * (*stack)->n;
	(*stack)->next->n = result;
	pop(stack, line_number);
}
