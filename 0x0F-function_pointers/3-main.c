#include "3-calc.h"

/**
* main - program for simple ops
* @argc: num of argu
* @argv: array of argu
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{

	int argv1, argv2, result;
	char o;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	argv1 = atoi(argv[1]);
	argv2 = atoi(argv[1]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && argv2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(argv1, argv2);

	printf("%d\n", result);

	return (0);
}
