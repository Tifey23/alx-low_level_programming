#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'Print all singles digit number using only the putchar func'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int range = 10;
	int counter = 0;

	while (counter < range)
	{
		putchar('0' + counter);
		counter++;
	}
	putchar('\n');
	return (0);
}
