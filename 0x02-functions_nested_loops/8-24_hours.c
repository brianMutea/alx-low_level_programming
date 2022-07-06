#include "main.h"

/**
 * jack_bauer - whose printing every minute of the day for
 * h = hour, m = minutea
 * / 10 allow rotate 2nd digit
 * for loop breaks before 24:00
 * Return: hour clock
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}

