#include "main.h"

/**
 * reverse_array - reverse array
 * @a: param pointer
 * @n: param pointer
 * Return: nothing
 *
 */


void reverse_array(int *a, int n)
{
	int arrItemat; /* will point at item 1 array[0] */
	int arrItempos; /* item position*/
	int temp;

	arrItemat = 0; /* start at pos */
	arrItempos = n - 1; /* current item, updates as we loop */

	while (arrItemat < arrItempos)
	{
		temp = a[arrItemat];
		a[arrItemat] = a[arrItempos];
		a[arrItempos] = temp;

		arrItemat++;
		arrItempos++;
	}
}
