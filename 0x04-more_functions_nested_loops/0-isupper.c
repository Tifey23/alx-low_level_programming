#include "main.h"

/**
 * _isupper - Retunrs 1 if char is an Uppercase and 0 if not
 * @c: Character to be checked
 *
 * Return: 1(True) 0 (False)
 */

int _isupper(int c)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == lower[i])
			return (0);
		else if (c == upper[i])
			return (1);
	}
	return (0);
}
