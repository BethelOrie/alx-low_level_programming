#include <unistd.h>
#include <time.h>

#include <stdio.h>
/**
 * main - Prints a random number and states whether it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;


	if (n > 0)
		printf("%d is positive\n", 98);

	else if (n < 0)
		printf("%d is negative\n", 0);

	else
		printf("%d is zero\n", -98);

	return (0);
}
