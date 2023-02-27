#include "main.h"

/**
 * swap_int swaps the values of two integers
 * @a: integer to swap
 * @b: interger to swap 
 */

void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
