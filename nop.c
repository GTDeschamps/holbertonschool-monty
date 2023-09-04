#include "monty.h"

/**
 * nop - Doesn't do anything (no operation).
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the bytecode file.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
