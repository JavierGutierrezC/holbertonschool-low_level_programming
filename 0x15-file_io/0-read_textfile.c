#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints afile to the POSIX std output
 * @filename: Name of the file to print
 * @letters: number of letters to read and print
 * @Return: The number of letters
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t length, ltr;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc((sizeof(char)) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	ltr = read(fd, buffer, letters);

	length = write(STDOUT_FILENO, buffer, ltr);
	if (length == -1)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (length);
}
