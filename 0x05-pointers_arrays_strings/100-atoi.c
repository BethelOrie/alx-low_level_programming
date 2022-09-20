#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _atoi - function returns the integer representation of the string
 *@*S: function takes as input the string that is to be converted to integer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i;
	char *S;

	s = " -9885";
	i = _atoi(s);/* i = - 9885*/
	
	printf("i = %d\n", i);
}
