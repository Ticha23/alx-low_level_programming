#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int from, to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit (97);
	}

	from =open (argv[1], O_RONLY);
	
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n")
		exit (98)
	}

	to = open(argv[2], O_CREAT | O_RONLY | O_TRUNC, 0644);

	if (to == -1)

	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(98);
	}
		
