#include<unistd.h>
/**
 * main - entry point
 *
 * Return: Using char string
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19",
	 sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
