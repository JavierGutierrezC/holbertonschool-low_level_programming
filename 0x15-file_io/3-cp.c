#include "holberton.h"
/**
 * main - copy contento of a file to another
 * @argc: count
 * @argv: array
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int ficho, fichc = 0, ecr = 0;
	ssize_t count = 1024;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	ficho = open(argv[1], O_RDONLY);
	if (ficho == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fichc = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fichc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (count == 1024)
	{
		count = read(ficho, buffer, 1024);
		if (count == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			exit(98); }
		ecr = write(fichc, buffer, count);
		if (ecr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
			exit(99); }}
	if (close(ficho) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %\n", ficho);
		exit(100); }
	if (close(fichc) == -1)
	{
		dfrintf(STDERR_FILENO, "Error: Can't close fd %d\n", fichc);
		exit(100); }
	return (0);
}
