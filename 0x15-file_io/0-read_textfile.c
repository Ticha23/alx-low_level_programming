#include "main.h"

/**
 * read_textfile -we are a function that can read atext file and print it out.
 * @filename: it is the file to read from.
 * @letters: letters to be read and printed out.
 *
 * Return: number of letters to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd;
	ssize_t lenr, lenw;
	char *ch;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, ch, letters);
	close(fd);
	if (lenr == -1)
	{
		free(ch);
		return (0);
	}
	lenw = write(STDOUT_FILENO, ch, lenr);
	free(ch);
	if (lenr != lenw)
		return (0);

	return (lenw);
}
