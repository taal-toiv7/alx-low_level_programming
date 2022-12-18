#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints everything
* @format: list of type of arguments in functions
*
* Return: nothing.
*/
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int l = 0, j, c = 0;
	char *str;
	const char t_arg[] = "clfs";

	va_start(valist, format);
	while (format && format[l])
	{

		j = 0;
		while (t_arg[j])
		{
			if (format[l] == t_arg[j] && c)
			{

				printf(",");
				break;
			} j++;
		}
		switch (format[l])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'l':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("nill)");
				break;
			}
			printf("%s", str);
			break;
		} l++;
	}
	printf("\n"), va_end(valist);
}


