#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - checks the string length
 * @s: char string
 * Return:length count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
