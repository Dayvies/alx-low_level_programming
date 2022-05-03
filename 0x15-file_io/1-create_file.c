#include "main.h"

/**
 * createfile - create file
 * @filename: filename
 * @text_content: text_content
 * Return: 1 if successfull
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t buffsize = 0;
	long int wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	while (text_content[buffsize])
		buffsize++;
	if (buffsize == 0)
		return (1);
	wr = write(fd, text_content, buffsize);
	close(fd);
	if (wr != (int)buffsize)
		return (-1);
	return (1);
}
