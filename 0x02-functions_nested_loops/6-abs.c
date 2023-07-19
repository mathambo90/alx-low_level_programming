#include "main.h"

/**
 * _abs - function that computes the absolute value on an integer
 * @c: the numbere of the computed
 * Return: zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
