#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - add function
 * @a: variable
 * @b: variable
 * Return: addition of variables
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction function
 * @a: Varaible
 * @b: Variable
 * Return: Substraction of variables
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: Variable
 * @b: Varaible
 * Return: Multiply variables
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: Varaible
 * @b: Variable
 * Return: divide variables
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module function
 * @a: Variable
 * @b: Variable
 * Return: mod of varaibles
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a % b);
}
