#include "main.h"

/**
 * push - A function that pushs an element
 * into the stack
 * @arg: the argument
 * @line_number: the line to push to
 *
 * Return: Nothing.
 */
void push(const char *arg, int line_number)
{
	int value;

	if (!arg || *arg == '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = atoi(arg);
	if (value == 0 && *arg != '0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack[++top] = value;
}
