/**
 * File 1-alphabet.c
 * Auth: Raquel Bezerra
 */

#include "main.h"
/**
 * pprint_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

		_putchar('\n');
}
