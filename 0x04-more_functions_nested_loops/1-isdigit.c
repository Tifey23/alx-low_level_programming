#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Returns 1if a given input is digit and 0 ifnot
 * @c: input to be  checked
 *
 * Return: 1 (True) 0 (False)
 */

int _isdigit(int c)
{
	putchar('0' + c);
	if (48 <= c <= 58)
	{
		printf("within the inte range");
		return (1);
	}
	else
	{
		printf("Not within");
		return (0);
	}
}

int main(void)
{
	printf("%d \n", _isdigit('5'));
	printf("%d \n", _isdigit('e'));
}
