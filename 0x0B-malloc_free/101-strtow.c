#include "main.h"
#include <stdlib.h>

/**
*strtow - returns a pointer to an array of strings (words)
*@str: string to evaluate
*Return: number of words
*/

char **strtow(char *str)
{
int flag, c, w;

flag = 0;
w = 0;

for (c = 0; str[c] != '\0'; c++)
{
if (str[c] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
}
return (NULL);
}
