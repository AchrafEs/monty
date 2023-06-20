#include "main.h"

/**
 * pop - A function that removes the top
 * element of the stack.
 * @line_number: the line number
 *
 * Return: Nothing, Void.
 */
void pop(int line_number)
{
	if (top == -1)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	top--;
}
