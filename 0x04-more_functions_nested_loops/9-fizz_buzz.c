#include "main.h"
#include <stdio.h>

/**
 * main - fizbuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; 1 < 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz ");
		}
		else if (i == 1)
		{
			printf("1 ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
