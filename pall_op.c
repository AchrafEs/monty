#include "main.h"

/**
 * pall - a function that prints all values
 * on the stack
 *
 * Return: Void
 */
void pall(void)
{
	int i;

	if (top == -1)
	{
		return;
	}
	for (i = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}
