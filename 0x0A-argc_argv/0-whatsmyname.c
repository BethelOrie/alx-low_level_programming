#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
*main - prints the name of the program
*@argc: number of arguments passed to the function
*@argv: argument vectors of pointers to string
*Return: Always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
