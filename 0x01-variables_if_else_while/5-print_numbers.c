#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: ' Print all single digit numbers'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int range = 10;
	int counter = 0;

	while (counter < range)
	{
		printf("%d", counter);
		counter++;
	}
	putchar('\n');
	return (0);
}
