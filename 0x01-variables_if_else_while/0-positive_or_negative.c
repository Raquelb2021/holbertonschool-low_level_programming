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

   	printf("is positive\n");
	printf("is zero\n");
	printf("is negative\n");

	return (0);
}
