#include "main.h"

/**
 * unsigned int- to become binary_to_unit
* binary_to_uint -converts a binary number to usigned int
* @b: string with binary number
* binary_to_uint - is unsigned
* Return: the converted number
*/
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}
