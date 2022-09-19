#include "main.h"
#include <string.h>

/**
 * puts_half - puts half
 * str: string param
 */
void puts_half(char *str)
	int X, Y, i;

	X = strlen(str);
	if (X % 2 == 1)
		Y = X / 2 + 1;
	else
		Y = X / 2;
	for (i = Y; i < X; i++)
		_putchar(str[i]);
	_putchar('\n');
}
