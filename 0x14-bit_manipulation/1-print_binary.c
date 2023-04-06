#include "main.h"
#include <stdio.h>

/**
 * print_binary; it prints binary of an in
 *
 * @n: interger
 * Return: 1 or 0
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)

	{
		if (n >> 0)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
