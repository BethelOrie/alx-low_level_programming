#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _atoi - function returns the integer representation of the string
 * @s: a pointer to a string to be converted to an integer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int value;
	char s[20];

	strcpy(s, "123");

	value = _atoi(s);
	printf("String value = %s, Int value = %d\n", str, value);

	return (0);
}
