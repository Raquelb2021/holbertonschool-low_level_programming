/**
 * main - entry point
 * Return: 0
 */

#include "main.h"

/**
 * print alphabet in lowercase
 * print_alphabet
 */
	void print_alphabet(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

		_putchar('\n');
}
