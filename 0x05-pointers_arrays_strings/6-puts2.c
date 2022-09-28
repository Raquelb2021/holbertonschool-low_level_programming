#include "main.h"
/**
 * puts2 - Prints every other character
 * @str: function
 */
void puts2(char *str)
{
	int prints = 0, a = 0;

	while (str[prints++])
	{
		a++;

	for (prints = 0; prints < a; prints += 2)

		_putchar(str[prints]);
	}
	_putchar('\n');
}
