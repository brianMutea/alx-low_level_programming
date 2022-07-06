#include "main.h"

/**
 * is_lower - checks lowercase char or otherwise
 * @c: single letter input
 * Return: 1 if letter is lowecase 0 otherwise
 *
 */


int is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
