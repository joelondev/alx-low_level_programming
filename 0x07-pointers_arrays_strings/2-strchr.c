#include "main.h"

/**
 * _strchr - function to locate a character in a string
 * @s: string value pointer
 * @c: occurance of character
 * Return: the string s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
