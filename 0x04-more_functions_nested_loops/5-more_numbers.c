#include "main.h"

/**
 * more_numbers - print 10times nums 0-14
 * Return: nothing
 */

void more_numbers(void)
{
	int counter;
	int num;
	
	counter = 0;

	while (counter < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		counter++;
		_putchar('\n');
	}
}
