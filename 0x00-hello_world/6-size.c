#include <stdio.h>

/**
 * main - Entry
 *
 * Description: 'Using the sizeof functiion'
 *
 * Result: Always 0(success)
 */

int main(void)
{
	char l;
	int number;
	long int longinteger;
	long long int longerInteger;
	float Decimal;

	printf("Size of a char: %d byte(s)\n", sizeof(l));
	printf("Size of an int: %d byte(s)\n", sizeof(number));
	printf("Size of a long int: %d byte(s)\n", sizeof(longinteger));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longerInteger));
	printf("Size of a float: %d byte(s)\n", sizeof(Decimal));
	return (0);
}
