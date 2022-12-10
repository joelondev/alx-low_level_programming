#include<unistd.h>
/**
 * main - entry point
 *
 * Return: Using char string
 */
int main(void)
{
char str0[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", str0[]);
return (1);
}
