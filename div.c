#include "monty.h"

/**
 * my_div - Divides the second top element of the stack by the top one
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the bytecode file.
 */
void my_div(stack_t **stack, unsigned int line_number)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n / (*stack)->n;
	(*stack)->next->n = result;
	pop(stack, line_number);
}
