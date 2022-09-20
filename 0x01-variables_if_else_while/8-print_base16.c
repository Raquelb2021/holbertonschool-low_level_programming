#include<stdio.h>
/**
 *  main - hexazonal using putchar
 *
 *  Return: Always 0
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 10; ch++)
	putchar((num % 10) + '0');

	for (num = 'a'; num <= 'f'; ch++)
	putchar(ch);

	putchar('\n');

	return (0);
}
