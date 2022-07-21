#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: points to char array or string
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	unsigned int index = 0;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
