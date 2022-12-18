#include "main.h"

/**
* _strpbrk - search a string for any bytes
* @s: string to be checked
* @accept: string to check against
*
* Return: pointer after check if matches with 0
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i =0; s[i]; i++)
	{
		for (j =0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
