#include<stdio.h>

/*
 * main -Entry pint
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

printf("Size of char: %c bytes\n", sizeof'charType');
printf("Size of int: %d bytes\n", sizeof'intType');
printf("Size of long int: %ld bytes\n", sizeof'longintType');
printf("Size of long long int: %lld byte\n", sizeof'longlongintType');
printf("Size of float: %f bytes\n", sizeof'floatType');
return (0);
}
