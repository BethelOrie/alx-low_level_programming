#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: input input letter
 * Return: always success
 */
int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

		return (1);

	else

		return (0);
}
