#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - check if character is digit
 * @c: the character
 * Return: 0(succes)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
