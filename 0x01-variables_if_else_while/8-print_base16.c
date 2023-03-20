#include <stdio.h>
#include <string.h>

/**
 * main -Entry Point
 *
 * Description: 'print all heaxadecimal values'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char hexaCode[] = "0123456789abcdef";
	int len = strlen(hexaCode);
	int counter = 0;

	while (counter < len)
	{
		char digit = hexaCode[counter];

		putchar(digit);
		counter++;
	}
	putchar('\n');
	return (0);
}
