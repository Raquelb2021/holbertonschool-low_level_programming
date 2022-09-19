#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry pint
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

   	printf("$n is positive\n");
	printf("$n is zero\n");
	printf("$n is negative\n");

	return (0);
}
