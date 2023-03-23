#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _isupper - Return 1 if a given char is uppercase and 0 if it is lowercase
 * @c: Character to be checked
 *
 * Return: 0(Lowercase) 1(Uppercase)
 */

int _isupper(int c);
