#include "main.h"

/**
* _strlen_recursion - calculates string length
* @s: string to be printed
*
* Return: void
*/
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
