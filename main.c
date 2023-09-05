#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * main - Entry point for Monty bytecode interpreter.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, EXIT_FAILURE on failure.
 */
int main(int argc, char *argv[])
{
	FILE *file;

	instruction_t instructions[] = {
		{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop},
		{"swap", swap}, {"add", add}, {"nop", nop}, {NULL, NULL}};

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	read_instructions(file, instructions);
	return (0);
}
