#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other char of a string begin from 1st
 * @str: the string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
}
