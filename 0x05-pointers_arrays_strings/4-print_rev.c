#include "main.h"
/**
 * print_rev - imprime en reversa
 * @r: string
 * return: 0
 */
void print_rev(char *r)
{
	int length = 0;
	int o;

	while (*r != '\0')
	{
		length++;
		r++;
	}
	r--;
	for (o = length; o > 0; o--)

	{
		_putchar(*r);
		r--;
	}

	_putchar('\n');
}
