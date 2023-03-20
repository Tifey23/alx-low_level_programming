#include <stdio.h>

/**
 * main - Entry
 * Description: Using the sizeof functiion
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

	printf("Size of a char: %d byte(s)", sizeof(l));
	printf("Size of an int: %d byte(s)", sizeof(number));
	printf("Size of a long int: %d byte(s)", sizeof(longinteger));
	printf("Size of a long long int: %d byte(s)", sizeof(longerInteger));
	printf("Size of a float: %c byte(s)", sizeof(Decimal));
	return (0);
}
