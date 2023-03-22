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
	int counter = 0;

	for (counter = 0; counter < len; counter++)
	{
		char letter = alphabets[counter];

		_putchar(letter);
	}
	_putchar('\n');
}

/**
 * main - Entry Point
 *
 * Description: 'print lowercase alphabets ten times'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int range = 10;
	int counter = 0;

	for (counter - 0; counter < range; counter++)
		printLowercase();
	return (0);
}
