#include <stdio.h>
#include "main.h"

/**
*print_numbers - function that print all numb from
*0 to 9
*
*Return: returns nun
*/

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
