#include "function_pointers.h"
#include "stdlib.h"
/**
 * print_name - prints a name in lower and upper case
 * @name: pointer directed to the name in the func
 * @f: point to the name in the function
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
