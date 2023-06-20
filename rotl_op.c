#include "main.h"

/**
 * rotl - A function that rotates the stack to the top.
 *
 * Return: Void.
 */
void rotl(void)
{
	int stack[STACK_SIZE];
	int top = -1;
	int i, temp;

	if (top >= 1)
	{
		temp = stack[top];
		for (i = top; i > 0; i--)
		{
			stack[i] = stack[i - 1];
		}
		stack[0] = temp;
	}
}
