#include<stdio.h>
/**
 * main - Prints the alphabet in lowercase and upercase
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

	putchar((num % 10) + '0');

	putchar(',');
	putchar(' ');

	putchar('\n');

	return (0);
}
