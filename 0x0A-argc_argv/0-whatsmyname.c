#include  <stdio.h>
#include <string.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{	int i;
	for (i = 0; i < argc; ++i)
	{
	printf("%s\n", argv[0]);
	}
		return (0);
}
