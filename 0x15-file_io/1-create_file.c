#include "holberton.h"
/**
 * create_file - Creates a new file
 * @filename: Name of the file to be created
 * @text_content: String to write in the file
 * Return: 1 on success -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int creatf;
	ssize_t lenght = 0;

	if (filename == NULL)
	{
	return (-1);
	}

	creatf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (creatf == -1)
	{
	return (-1);
	}
	if (text_content == NULL)
		text_content = "";
		else
	lenght = write(creatf, text_content, strlen(text_content));

	if (lenght == -1)
	{
		return (-1);
	}
	close(creatf);
	return (1);
}
