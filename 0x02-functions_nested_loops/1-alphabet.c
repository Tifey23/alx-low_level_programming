#include <stdio.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Description: 'Print all alphabets in lowercase'
 *
 * Return:  Always 0 (success)
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = strlen(alphabets);
	int i = 0;

	for (i = 0; i < len; i++)
	{
		char letter = alphabets[i];

		putchar(letter);
	}
	putchar('\n');
	return  (0);
}
