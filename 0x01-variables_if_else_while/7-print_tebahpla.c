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
	int len = strlen(alphabets) + 1;
	int counter = 0;

	while (counter < len)
	{
		char letter;

		if (counter == 0)
			letter = alphabets[(len - 1)];
		else
			letter = alphabets[(len - (counter + 1))];

		putchar(letter);
		counter++;
	}
	putchar('\n');
	return (0);
}
