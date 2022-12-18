#include "main.h"

/**
* append_text_to_file - Appends text at end of file
* @filename: pointer to the name of file
* @text_content: The string to add at the end of file
*
* Return: if function fails - -1 / 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(0);

	return (1);
}
