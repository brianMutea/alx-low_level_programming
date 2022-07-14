#include "main.h"

/**
 * leet - encode string
 * @s: param pointer
 * Return: ecncoded string
 */

char *leet(char *s)
{
	int i;
	int j;
	/* char s[100];*/
	char l[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] == (l[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
