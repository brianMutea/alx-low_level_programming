#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print the string in reverse order
 * @s: the string
 * Return: nothing
 * HERE i WILL USE THE SWAPPING IDEA
 */

void print_rev(char *s)
{
	char temp;
	char *endofS = s;

	while (*endofS) endofS++;
	endofS--;

	while (s < endofS)
	{
		temp = *s;
		*s++ = *endofS;
		*endofS-- = temp;
	}
}
