#include "main.h"

/**
 * swap - A function that swaps the top two
 * elements of the stack.
 * @line_number: the line number.
 *
 * Return: Void.
 */
void swap(int line_number)
{
	int temp = stack[top];


	if (top < 1)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = stack[top];
	stack[top] = stack[top - 1];
	stack[top - 1] = temp;
}
