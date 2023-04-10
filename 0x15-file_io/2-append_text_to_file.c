#include "main.h"

/**
 * append_text_to_file.c -  appends text at the end of a file.
 * @filename: 
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, 0_WRONLY | 0_APPEMD);
	
	if (fd == -1)
		return (-1);

	if  (text _content == NULL)
		return (-1);

		write (fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
