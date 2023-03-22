#include <string.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: 'Print all alphabets in lowercase'
 *
 * Return:  Void
 */

void print_alphabet(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = strlen(alphabets);
	int i = 0;

	for (i = 0; i < len; i++)
	{
		char letter = alphabets[i];

		_putchar(letter);
	}
	_putchar('\n');
}
