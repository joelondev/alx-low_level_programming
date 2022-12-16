#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, t1, t2, s1, s2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	t1 = j / 1000000000;
	t2 = j % 1000000000;
	s1 = k / 1000000000;
	s2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", s1 + (s2 / 1000000000));
		printf("%lu", s2 % 1000000000);
		s1 = s1 + t1;
		t1 = s1 - t1;
		s2 = s2 + t2;
		t2 = s2 - t2;
	}

	printf("\n");

	return (0);
}
