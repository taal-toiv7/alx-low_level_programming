#include <unistd.h>

/**
* _putchar - writes the char c to stdout
* @c: The char to be printed
*
* Return: on success 1.
*On error, -1 is returned and error is set correctly.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
