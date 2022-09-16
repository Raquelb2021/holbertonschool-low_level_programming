#include<stdio.h>

/*
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

printf("Size of a: %c bytes\n", sizeof(a));
printf("Size of b: %d bytes\n", sizeof(b));
printf("Size of c: %ld bytes\n", sizeof(c));
printf("Size of d %lld byte\n", sizeof(d));
printf("Size of e: %f bytes\n", sizeof(e));
return (0);
}
