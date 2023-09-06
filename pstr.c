#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the bytecode file.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	while (*stack != NULL && (*stack)->n != 0)
	{
		putchar((*stack)->n);
		*stack = (*stack)->next;
	}
	putchar('\n');
}
