#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: 'Last digit checker'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Number is %d", n);
	/* your code goes heer */
	int last_digit = n % 10;

	printf(" last digit is %d\n", last_digit);
	if (last_digit > 5)
		printf("%d and is grater than 5\n", last_digit);
	else if (last_digit == 0)
		printf("%d and is 0", last_digit);
	else if (last_digit < 6 & last_digit != 0)
		printf("%d and is less than 6 and not 0\n", last_digit);
	return (0);
}
