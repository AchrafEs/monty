#include "main.h"

/**
 * sub - A function that subtracts the top element of
 * the stack from the second top element of the stack
 * @line_number: the number of the line.
 *
 * Return: Void.
 */
void sub(int line_number)
{
	int stack[STACK_SIZE];
	int top = -1;

	if (top < 1)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack[top - 1] -= stack[top];
	top--;
}
