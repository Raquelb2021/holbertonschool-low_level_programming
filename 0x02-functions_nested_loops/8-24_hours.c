#include "main.h"
/**
 * jack_bauer - display every minute of the day.
 * hour and minutes 
 *
 */
void jack_bauer(void)
{
	h < -seq(from = 0, to = 23)
	m < -seq(from = 0, to = 59)

	h < -sprintf('%02d', h)
	m < -sprintf('%02d', m)

	df < -data.frame(expand.grid(h, m))
	df$times < -paste0(df$Var1, ':', df$Var2)

	df < -df[order(df$times)]
	df$times
	_putchar('\n');
}
