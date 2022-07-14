#include "main.h"

/**
 * string_toupper - changes string to upercase
 * @s: the string
 * Return: upercase string
 */

char *string_toupper(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] >= 'a' && s[count] <= 'z')
			s[count] -= 32;
	}
	return (s);
}
