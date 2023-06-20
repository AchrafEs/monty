#include "main.h"

/**
 * pstr - A function that prints the string starting
 * at the top of the stack, followed by a new line.
 *
 * Return: Void.
 */
void pstr(void)
{
	while (top >= 0 && stack[top] != 0 && stack[top] >= 0 && stack[top] <= 127)
	{
		printf("%c", (char)stack[top]);
		top--;
	}
	printf("\n");
}
