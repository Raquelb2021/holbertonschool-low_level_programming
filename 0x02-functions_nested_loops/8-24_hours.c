#include "main.h"
/**
 * jack_bauer - display every minute of the day.
 * hour and minutes 
 *
 */
void jack_bauer(void)
{
	int h, m;
	for(h = 0; h <= 23; h++)
	{
	for(m =0; m <= 59; m++)
	{
		_putchar((h / a) + '0');
		_putchar((h % a) + '0');
		_putchar(':');
		_putchar((m / a) + '0');
		_putchar((m % a) + '0');
		_putchar('\n');
	}
	}
}	
