#include "holberton.h"
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file to be created
 * @text_content: String to write in the file
 * Return: 1 on success -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int append;
	ssize_t lenght = 0;

	if (filename == NULL)
	{
	return (-1);
	}

	append = open(filename, O_RDWR | O_APPEND);

	if (text_content == NULL)
	{
	return (1);
	}
	lenght = write(append, text_content, strlen(text_content));

	if (lenght == -1)
	{
		return (-1);
	}
	close(append);
	return (1);
}
