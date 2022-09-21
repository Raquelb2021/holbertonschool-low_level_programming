/**
 * print_alphabet - print alphabet in lowercase 10 times
 *
 * return:0(success)
 */
#include "main.h"
void print_alphabet_x10(void)
{

	int n, co;
	
	co = 0;

	while(co < 10)
{
	for(n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	co++;
	_putchar('\n');
	}
	}
