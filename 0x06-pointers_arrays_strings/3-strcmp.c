#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: param pointer
 * @s2: param pointer
 * Return: comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		/*break if terminating byte */
		if (*s1 == '\0' || *s2 == '\0')
			break;

		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
