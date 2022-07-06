#include "main.h"

/**
 * _islower - checks lowercase char or otherwise
 * @c: single letter input
 * Return: 1 if letter is lowecase 0 otherwise
 *
 */

int _islower(int c)
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
