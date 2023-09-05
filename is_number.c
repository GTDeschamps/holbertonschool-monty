#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * is_number - Checks if a string is a valid integer.
 * @str: The string to check.
 * Return: 1 if it's a valid integer, 0 otherwise.
 */
int is_number(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	if (*str == '-' || *str == '+')
		str++;

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}
