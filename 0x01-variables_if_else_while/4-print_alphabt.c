#include <stdio.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Description: 'print all alphabets except e and q'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabets[] = "abcdfghijklmnoprstuvwxyz";
	int len = strlen(alphabets);
	int counter;

	for  (counter = 0; counter < len; counter++)
	{
		char letter = alphabets[counter];

		putchar(letter);
	}
	putchar('\n');
	return (0);
}
