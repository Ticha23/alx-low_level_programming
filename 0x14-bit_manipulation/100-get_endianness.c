#include <stdio.h>

/**
 * get_endianness -  checks if it's little or big endian
 *
 * Return: 0 for big endian or 1 for little endian
 */
int get_endianness(void)
{
	unsigned int l;
	char *k;

	l = 1;
	k = (char *) &l;

	return ((int)*k);

}
