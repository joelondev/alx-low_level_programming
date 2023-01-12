#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size_1 = 0, size_2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size_1] != '\0')
	{
		size_1++;
	}

	while (s2[size_2] != '\0')
	{
		size_2++;
	}

	if (n > size_2)
	n = size2;
	p = malloc((size_1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size_1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size_1 + n); i++)
	{
		p[i] = s2[i - size_1];
	}
	p[i] = '\0';

return (p);
}
