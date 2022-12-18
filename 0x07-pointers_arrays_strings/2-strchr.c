#include "main.h"

/**
* _strchar - starting point
* @s: string pointed to
* @c: input
* Return: value 0
*/
char *_strchar(char *s, char c)
{
	int i;

	for (i = 0; *(s +i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
