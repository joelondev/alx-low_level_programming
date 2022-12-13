#include <main.h>
/**
 * main - this program prints _putchar and a new line
 *
 * Return: 0
 */

int main(void)
{
	char putc[] = "_putchar";
	int i = 0;

	while (putc[i] != '\0')
	{
		_putchar(putc[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
