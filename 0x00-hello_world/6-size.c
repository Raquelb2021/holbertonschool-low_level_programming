#include<stdio.h>

/**
 * main -Entry pint
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of a: %zu bytes\n", sizeof(a));
printf("Size of b: %zu bytes\n", sizeof(b));
printf("Size of c: %zu bytes\n", sizeof(c));
printf("Size of d %zu byte\n", sizeof(d));
printf("Size of e: %zu bytes\n", sizeof(e));
return (0);
}
