#include "monty.h"
/**
 * is_queue - it's the word "stack"
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the bytecode file.
 */
void is_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	is_it_queue = 1; /* Mode "queue"*/
}
