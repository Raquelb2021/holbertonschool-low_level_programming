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
	if(n == 0);
	printf("is zero\n");
	if(n < 0);
	printf("is negative\n");

	return (0);
}
