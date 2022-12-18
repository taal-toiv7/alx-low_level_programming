#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* *create_buffer - Allocates 1024 bytes for buffer
* @filename - name of file buffer is storing chars for
* Return: A pointer to new allocated buffer
*/

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Cant write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
* close_file - closes file descriptors
* @fd: the file descriptor to be closed
*/
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - copies the contents of a file to another
* @argc: the number of arguments supplied to program
* @argv: An array of pointers to the arguments
*
* Return: 0 on success
* Description: If the arg count is incorrect - exit code 97.
* Descript: if file_from dos not read - exit code 98.
* Descipti: if file_from cannot be created - exit code 99.
* description: if file_from canot close - exit code 100.
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Ussage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", argv[2]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: cant write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

		} while (r > 0);

		free(buffer);
		close_file(from);
		close_flie(to);

		return (0);
}
