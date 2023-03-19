#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: 'Print both lower and uppercase alphabets'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = strlen(alphabets);
	int counter = 0;

	for (counter = 0; counter < len; counter++)
	{
		char letter = alphabets[counter];

		putchar(letter);
	}
	for (counter = 0; counter < len; counter++)
	{
		char letter = alphabets[counter];
		char uppercase = toupper(letter);

		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
