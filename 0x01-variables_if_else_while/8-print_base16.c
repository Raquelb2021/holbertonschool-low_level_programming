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

	for (num = 0; num < 9; ch++)
	putchar((num % 9) + '0');

	for (num = 'a'; num <= 'f'; ch++)
	putchar(ch);

	putchar('\n');

	return (0);
}
