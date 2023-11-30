#include "main.h"

/**
 * err_file - error detector
 * @file_from: file from..
 * @file_to: file to..
 * @argv: vector of arguments
 * Return: nothing
 */

void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main function
 * @argc: arguments count
 * @argv: vector of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int file_from, file_to, err, bytes, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);
	bytes = 1024;
	while (bytes)
	{
		bytes = read(file_from, buf, 1024);
		if (bytes == -1)
			err_file(-1, 0, argv);
		w = write(file_to, buf, bytes);
		if (w == -1)
			err_file(0, -1, argv);
	}
	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
