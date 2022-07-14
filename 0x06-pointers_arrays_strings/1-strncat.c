#include "main.h"
#include <stdlib.h>

/**
 * *_strncat - join two strings but this time it uses n bytes from src
 * @dest: param pointer
 * @src: param pointer
 * @n: bytes
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count;
	int m = 0;

	for (count = 0; count < 1000; count++)
	{
		if (dest[count] == '\0')
		{
			break;
		}
		m++;
	}

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[m + count] = src[count];
	}
	dest[m + count] = '\0';
	return (dest);
}
