#include "main.h"
#include <unisted.h>

/**
* _putchar - writes the character c to dtdout
* @c: the character to print
*
* Return: on success 1
* On error, -1 is returned and error is set corectly
*/

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
