#include <main.h>

/**
 * main - prints _alphabet in lowercase alphabet followed by a new line
 *
 * Return: Always 0.
 */
 int main(void)
	
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');

	return (0);
}
