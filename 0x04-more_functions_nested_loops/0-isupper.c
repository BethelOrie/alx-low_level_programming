#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to check if character is uppercase
 *@c: checks input of functions
 *
 * Return: returns 1 if c is uppercase and 0 if otherwise
 */
int _isupper (int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
