#include <stdio.h>

/**
 * main - fizbuzz
 * Return: 0
 */

int main(void)
{
	for (i = 1; 1 < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz ");
		else if (i % 3 == 0)
			printf("fizz ");
		else if (i % 5 == 0)
			printf("buzz ");
		else
			printf("%d ", i);
	}
	printf("buzz\n");
	return (0);
}
