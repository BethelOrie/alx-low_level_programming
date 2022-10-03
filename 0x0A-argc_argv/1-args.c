#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
*main - prints the number of arguments passed on it
*@argc: number of arguments passed to the function
*@argv: argument vectors of pointers to string
*
*Return: Always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
