#include <stdio.h>

/**
 * main - two digits
 *
 * Return: 0
 */
int main(void)
{
	int j, k;
	int a, b, c, d;

	for (j = 0; j < 100; j++)
	{
		a = j / 10;
		b = j % 10;

		for (k = 0; k < 100; k++)
		{
			c = k / 10;
			d = k % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
