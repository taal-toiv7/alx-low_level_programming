#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Reads text file and prints tp POSIX stdout
* @filename: pointer to the name of file
* @letters: number of letters fuction must read and print
*
* Return: if function fails or file is NULL 0/w the bytes function can read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);

	return (w);
}
