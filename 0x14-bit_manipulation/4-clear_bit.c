#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to nsigned int
 * @index: an index which i will set
 *
 * Return: "1" for success or  "-1" for error
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int name;
	int i;

	if (index > 64)
		return (-1);

	for (i = 0; i <= 63; i++)
	{
		name = 1 << index;
		*n &= ~name;
	}
	return (1);
}

