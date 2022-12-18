#include "main.h"

/**
* _memset - filling a block of memory
* @s: starting address
* @b: char value to be used
* @n: no of bytes used
*
* Return: the pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n++;
	}
	return (s);
}
