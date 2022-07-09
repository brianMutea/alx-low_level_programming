#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: pram
 * Return: nothing
 */

void print_diagonal(int n)
{
	int a, b;

	a= 0;
	b=0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}		
	}
	else
	{
		_putchar('\n');	
	}
}
