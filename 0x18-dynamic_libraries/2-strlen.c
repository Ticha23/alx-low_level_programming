#include "main.h"
/**
 * _strlen - returns the length of a string
 * @h: string
 * Return: length
 */
int _strlen(char *h)
{
	int longi = 0;

	while (*h != '\0')
	{
		longi++;
		h++;
	}

	return (longi);
}
