#include "main.h"

/**
* _strcmp - Function that compares string
*@s1: string 1
*@s2: string 2
*Return:
*	return 0 if s1 = s2
*	return neg num if s1 is greater than s2
*	return pos num if s1 is less than s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;

	}
	return (diff);
}
