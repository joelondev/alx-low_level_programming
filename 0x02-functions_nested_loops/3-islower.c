#include "main.h"
/**
 * _islower - program checks for lowercase character.
 * c: char type
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
