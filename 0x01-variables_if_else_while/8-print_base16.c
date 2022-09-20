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

	for (num = 0; num < 9; num++)
	putchar((num % 9) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);

	putchar('\n');

	return (0);
}
