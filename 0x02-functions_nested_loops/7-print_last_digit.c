#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @numld: last digit integer
 * Return: last digit's value
 */



int print_last_digit(int numld)
{
	int ld;

	ld = (numld % 10);
	if (ld <= 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}
