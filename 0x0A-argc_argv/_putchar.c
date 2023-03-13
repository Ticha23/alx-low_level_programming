#include<unistd.h>

/**
 * _putchar -writesthe character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * Error , -1 is returned , and errno is set appropriately
 *
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
