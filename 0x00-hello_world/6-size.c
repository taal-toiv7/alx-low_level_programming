#include <stdio.h>

/**
 * main -block to print strings
 *
 * main function to be used
 * Return: 0
 */
int main(void)
{
	char d;
	int a;
	long b;
	long long c;
	float f;

	printf("Size of a char: %lu byte(s)\n",sizeof(d));
	printf("Size of an int: %lu byte(s)\n",sizeof(a));
	printf("Size of a long int: %lu byte(s)\n",sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(c));
	printf("Size of a float int: %lu byte(s)\n",sizeof(f));
	return (0);
}



