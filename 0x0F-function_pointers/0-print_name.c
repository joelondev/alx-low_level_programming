#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats prints a name passed
 * @name: char to display to the stdout
 * @f: A pointer function
 * Return: No return.
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
