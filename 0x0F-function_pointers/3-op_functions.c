#include "3-calc.h"

/**
* op_add - calculates the sum of two integers
* @a: first int
* @b: second int
*
* Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - calculates the difference of two integers
* @a: first int
* @b: second int
*
* Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - calculates the product of two int
* @a: 1st int
* @b: 2nd int
*
* Return: product of the two int
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - calculate the division of int
* @a: 1st int
* @b: 2nd int
*
* Return: divided value of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - calculates remainder of divided int
* @a: 1st int
* @b: 2nd int
*
* Return: remainder of value int
*/
int op_mod(int a, int b)
{
	return (a % b);
}
