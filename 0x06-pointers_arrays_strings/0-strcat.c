#include "main.h"
#include <stdlib.h>

/**
 * *_strcat - joins two strings
 * @dest: param pointer
 * @src: param pointer
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	/** Initialize counters*/

	int destCount = 0;
	int srcCount = 0;

	/* loop throught the dest string*/

	while (dest[destCount] != '\0')
	{
		/* when the terminating null byte is reached jump*/
		destCount++;
	}

	/* loop thro src string */
	while (src[srcCount] != '\0')
	{
		/** join the src string to dest */

		dest[destCount] = src[srcCount];
		srcCount++;
	}

	dest[destCount] = '\0';
	return (dest);

}
