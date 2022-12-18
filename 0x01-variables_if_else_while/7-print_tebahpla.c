#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Starting Block (void)
 *
 * Return: Value 0 (pass)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');

	return (0);
}
