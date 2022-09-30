#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _atoi - function returns the integer representation of the string
 *@*str: function takes as input the string that is to be converted to integer
 * Return: Always 0.
 */
int _atoi(char *str)
{
	int i;

	str = " -9885";
	i = _atoi(str);/* i = - 9885*/

	printf("i = %d\n", i);
}
