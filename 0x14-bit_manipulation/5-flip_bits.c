#include "main.h"
#include <stdio.h>

/**
 * flip_bits - shows number of bits required to flip from a number
 * @n: unsigned long int
 * @m: the bit which will be flipped
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = n ^ m;
	unsigned int count = 0;

	while (b != 0)
	{
		if (b & 1)
		{
			count++;
		}
		b = b >> 1;
	}
	return (count);
}

