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
	printf("The randomly generaed number is");
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	return (0);
}
