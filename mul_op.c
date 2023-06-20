#include "main.h"

/**
 * mul - A function that multiplies the second top
 * element of the stack with the top element of the stack.
 * @line_number: the number of the line.
 *
 * Return: Nothing
 */
void mul(int line_number)
{
	int stack[STACK_SIZE];
	int top = -1;

	if (top < 1)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack[top - 1] *= stack[top];
	top--;
}
