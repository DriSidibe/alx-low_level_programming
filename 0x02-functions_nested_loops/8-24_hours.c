#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *jack_bauer - check the code
 */
void jack_bauer()
{
	int hour;
	int minute;

	for (hour = 0 ; hour < 24 ; hour++)
	{
		for (minute = 0 ; minute < 60 ; minute++)
		{
			_putchar(hour + '0');
			_putchar(':');
			_putchar(minute + '0');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
