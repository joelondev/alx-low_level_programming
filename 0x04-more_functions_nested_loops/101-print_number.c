#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	unsigned int power; /* power of 10 */
	int bool_c; /* boolean check */
	unsigned int; /* converting int to long */

	num = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* count up */
	power = 1;
	bool_c = 1;
	while (bool_c)
	{
		if (num / (power * 10) > 0)
			power *= 10;
		else
			bool_c = 0;
	}

	/* count down */
	while (num >= 0)
	{
		if (power == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / power % 10) + '0');
			power /= 10;
		}
	}
}
Footer
