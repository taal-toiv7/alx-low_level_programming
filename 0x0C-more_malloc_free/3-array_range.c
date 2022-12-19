#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of intergers
* @min: first interger number
* @max: last interger number
*
* Return: pointer to newly allocatedd memory or NULL if fails
*/
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
