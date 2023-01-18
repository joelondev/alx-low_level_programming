#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer name
 * @f: function pointer
 * Return: null
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
