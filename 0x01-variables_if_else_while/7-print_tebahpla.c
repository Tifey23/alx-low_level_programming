#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'Print all alphabets in reversed order'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = strlen(alphabets);
	int counter = 0;

	while ((len + 1) > counter)
	{
		char letter;

		if (counter == 0)
			letter = alphabets[len];
		else
			letter = alphabets[(len - counter)];

		putchar(letter);
		counter++;
	}
	putchar('\n');
	return (0);
}
