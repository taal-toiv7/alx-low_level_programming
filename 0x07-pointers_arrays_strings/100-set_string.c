#include "main.h"
#include <stdio.h>

/**
* set_string - sets the value of a pointer to char
* @s: pointer to change
* @to: string to change pointer to value
*
* Return: void
*/
void set_string(char **s, char *to);
{
	*s = to;
}
