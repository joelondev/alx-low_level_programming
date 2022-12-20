#include "main.h"
#include <stdio.h>
/**
 * print_rev - fxn that prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
