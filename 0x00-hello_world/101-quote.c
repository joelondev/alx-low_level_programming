#include<unistd.h>
/**
 * main - entry point
 *
 * Return: Using char string
 */
int main(void)
{
char str0[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

fwrite(2, str0, 59);
return (1);
}
