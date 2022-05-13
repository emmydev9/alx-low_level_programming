#include "3-calc.h"

/**
* op_add - add operation.
* @a: first opd
* @b: second opd
* Return: int
**/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - substract operation.
* @a: first opd.
* @b: second opd.
* Return: int.
**/

int op_sub(int a, int b)
{

	return (a - b);
}

/**
* op_mul - multiple of operation.
* @a: first opd
* @b: second opd
* Return: int
**/

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
* op_div - div operation
* @a: first opd
* @b: second opd
* Return: int.
**/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
* op_mod - modulus operation
* @a: first opd
* @b: second opd
* Return: int.
**/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
