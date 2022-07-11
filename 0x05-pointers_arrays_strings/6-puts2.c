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
	int counter = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (counter < i)
	{
		_putchar(str[counter]);
		counter = counter + 2;
	}
	_putchar('\n');
}
