#include<stdio.h>
/**
 * main - Prints all numbers of base 10 starting from 0 using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	putchar((num % 9) + '0');
	putchar('\n');
	return (0);
}
