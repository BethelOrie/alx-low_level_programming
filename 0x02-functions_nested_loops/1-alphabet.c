#include "main.h"

/**
 * prints_alphabet in lowercase followed by newline
 *
 * Return: 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
