#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - it converts a binary number to unsigned integer
 * @b: points to a strings of 0 and 1
 *
 *  Return: the converted number or 0
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int stop = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		stop <<= 1;

		if (b[i] == '1')
			stop |= 1;
	}
	return (stop);
}
