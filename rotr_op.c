#include "main.h"

/**
 * rotr - A function that rotates the stack to the bottom.
 *
 * Return: Void.
 */
void rotr(void)
{
	int temp, i;

	if (top >= 1)
	{
		temp = stack[0];
		for (i = 0; i < top; i++)
		{
			stack[i] = stack[i + 1];
		}
		stack[top] = temp;
	}
}
