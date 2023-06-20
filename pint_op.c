#include "main.h"

/**
 * pint - a function that prints the value
 * at the top of the stack
 * @line_number: the line number
 *
 * Return: Nothing.
 */
void pint(int line_number)
{
	int stack[STACK_SIZE];
	int top = -1;

	if (top == -1)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack[top]);
}
