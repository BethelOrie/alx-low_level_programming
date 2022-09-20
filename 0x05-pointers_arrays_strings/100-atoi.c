#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * int _atoi - function that converts a string to an integer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int value;
	char str[20];

	strcpy(str, "123");

	value = _atoi(str);
	printf("String value = %s, Int value = %d\n", str, value);

	return (0);
}
