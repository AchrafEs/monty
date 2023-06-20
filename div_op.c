#include "main.h"

/**
 * div - a function that divides the second top element
 * of the stack by the top element of the stack.
 * @line_number: the number of the line
 *
 * Return: Nothing
 */
void div(int line_number)
{
	int divisor;

	if (top < 1)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	divisor = stack[top];
	if (divisor == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack[top - 1] /= divisor;
	top--;
}
