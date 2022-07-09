#include <stdio.h>
#include <stdlib.h>

/**
 * main - fizz, buzz, fizzbuzz
 * Return: 0
 */


int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", num);
			printf(" ");
		}
	}
	return (0);
}
