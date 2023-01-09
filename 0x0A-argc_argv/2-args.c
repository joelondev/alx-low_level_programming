#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for(; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
