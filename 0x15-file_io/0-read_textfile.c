#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of the letters it should read and print
 * Return: the actual number of letters it could read and print, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesR, bytesW;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	bytesR = read(fd, buf, letters);
	close(fd);

	if (bytesR == -1)
		return (0);

	bytesW = write(STDOUT_FILENO, buf, bytesR);
	free(buf);

	return (bytesW);
}
