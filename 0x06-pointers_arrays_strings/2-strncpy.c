#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: param pointer
 * @src: param pointer
 * @n: bytes
 * Return: copied string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
