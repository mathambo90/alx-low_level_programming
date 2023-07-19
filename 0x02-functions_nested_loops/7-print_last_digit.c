#include "main.h"

/**
 * print last_digit of a number
 * @n: The number to be treated
 * return: value of the last digit of the number
 */
int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 10)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);

}
