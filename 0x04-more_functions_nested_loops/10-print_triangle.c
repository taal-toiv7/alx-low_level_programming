main.h.txt
Who has access
A
System properties
Type
Text
Size
456 bytes
Storage used
456 bytes
Location
More functions, more nested loops
Owner
Antony Bahati
Modified
Sep 15, 2022 by Antony Bahati
Opened
4:16 AM by me
Created
Sep 15, 2022
No description
Viewers can download

#include <stdio.h>
#include "main.h"

/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return: returns nothing
*/

void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				putchar(' ');
			}

			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				putchar('#');
			}

			if (inc1 == size)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');
}
