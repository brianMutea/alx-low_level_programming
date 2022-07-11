#include "main.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
/**
 * _puts - prints a string to the stdout
 * @str: the  string
 * Return: nothing
 */

void _puts(char *str)
{
	int len = strlen(str) + 1;
	char *temp = malloc(len);

	int i;

	for (i = 0; i < len; i++)
	{
		char ch = str[i];

		temp[i] = ch;
	}
	temp[i] = 0;

	puts(temp);


}
