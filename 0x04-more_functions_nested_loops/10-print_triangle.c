#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: param
 * Return: 0
 */

void print_triangle(int size)
{
	int rows, cols;

	if (size > 0)
	{
		for (rows = size; rows >= 1; rows--)
		{
			for (cols = size; cols < rows; cols++)
			{
				_putchar(' ');

			}	
			for (cols = size; cols >= rows; cols--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
