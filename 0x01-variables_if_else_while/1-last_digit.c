#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - indicates greater than 5, less than 6 and 0
 *
 * Return: 0 Always 
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
