#include "main.h"

/**
 * main -  prints the alphabet in lowercase
 * description: function that prints _alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	return(0)
}
