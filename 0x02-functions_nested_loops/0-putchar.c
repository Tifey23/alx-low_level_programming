#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Prints -putchar as text'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char text[] = "-putchar";
	int len = strlen(text);
	int counter;

	for (counter = 0; counter < len; counter++)
	{
		char letter = text[counter];

		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
