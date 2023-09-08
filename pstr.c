#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the bytecode file.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *ptr;

	ptr = *stack;

	while (ptr != NULL)
	{
		if (ptr->n <= 0 || ptr->n > 127)
		break;

		putchar(ptr->n);
		ptr = ptr->next;
	}
	putchar('\n');
}
