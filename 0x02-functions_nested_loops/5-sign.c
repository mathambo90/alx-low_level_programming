#include "main.h"

/**
 * print_sign - print sign of numbers
 * @n: the number to be checked
 * Return: 1 for positive num, -1 for negative number or zero for any number
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	{
	return (0);
	}
}

