#include "main.h"

/**
 * add - function to add the top two elements of the stack
 * @line_number: the number of the line
 *
 * Return: Void.
 */
void add(int line_number)
{
	int stack[STACK_SIZE];
	int top = -1;

	if (top < 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack[top - 1] += stack[top];
	top--;
}
