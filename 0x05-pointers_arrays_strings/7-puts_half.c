#include "main.h"

/**
 * puts_half - prints 2nd half of string
 * @str: the string
 * Return: nothing
 *
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (*(str + len) != '\0')
		len++;
	n = len % 2 == 0 ? len / 2 : (len / 2) + 1;
	/** if length mod 2 == 0 div len by 2 else +1 */
	while (n < len)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
