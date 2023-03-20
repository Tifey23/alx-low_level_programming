#include <stdio.h>
#include <string.h>

/**
 * main -Entry Point
 *
 * Description: 'Print all single digit numbers separated by acomma'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int range = 10;
	int i = 0;

	for (i = 0; i < range; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
