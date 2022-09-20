/**
 * main - entry point
 * 
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase.
 * @letter: the string to be prited
 */
void print_alphabet(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

		_putchar('\n');
}
