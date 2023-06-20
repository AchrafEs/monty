#include "main.h"

/**
 * pchar - A function that prints the char at the top of
 * the stack, followed by a new line.
 * @line_number: the number of the line.
 *
 * Return: Nothing
 */
void pchar(int line_number)
{
	int value;

	if (top < 0)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = stack[top];
	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (char)value);
}
