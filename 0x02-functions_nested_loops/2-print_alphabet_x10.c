#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print all lowercase letters
 *
 *  Description: 'Print all alphabets in lowercase and add a new line'
 *
 *  Return: void
 */

void print_alphabet_x10(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = strlen(alphabets);
	int counter = 0, i;
	int range = 10;

	for (i = 0; i < range; i++)
	{
		for (counter = 0; counter < len; counter++)
		{
			char letter = alphabets[counter];

			_putchar(letter);
		}
		_putchar('\n');
	}
}
