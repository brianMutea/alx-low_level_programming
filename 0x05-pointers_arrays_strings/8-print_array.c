#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elems of array
 * @a: pointer 
 * @n: pointer to rest
 * Return: nothing
 */


void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
