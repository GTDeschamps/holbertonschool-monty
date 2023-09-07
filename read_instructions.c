#include "monty.h"

/**
 *read_instructions - read and execute the instruction of monty file
 *@file: name of file
 *@instructions: instructions
 *Return: void
 */

void read_instructions(FILE *file, instruction_t *instructions)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		char *opcode = strtok(line, " \n");

		if (opcode == NULL || opcode[0] == '#')
			continue;
		
		int found = 0;

		for (int i = 0; instructions[i].opcode != NULL; i++)
		{
			if (strcmp(opcode, instructions[i].opcode) == 0)
			{
				instructions[i].f(&stack, line_number);
				found = 1;
				break;
			}
		}
		if (!found)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			free(line);
			fclose(file);
			free_stack(&stack);
			exit(EXIT_FAILURE);
		}
	}
	free(line);
	fclose(file);
	free_stack(&stack);
}
