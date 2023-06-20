#include "main.h"

/**
 * print - a function that prints the value
 * at the top of the stack
 * @line_number: the line number
 *
 * Return: Nothing.
 */
void pint(int line_number)
{
	if (top == -1)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack[top]);
}