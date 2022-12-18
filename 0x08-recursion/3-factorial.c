#include "main.h"
#include <stdio.h>

/**
* factorial - returns factorial of any given number
* @n: number to be used
*
* Return: the factorial of the number
*/
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}

