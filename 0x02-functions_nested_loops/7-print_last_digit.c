#include "main.h"

/**
 * print_last_digit - prints last digit of a value
 * Return: always k
 */

int print_last_digit(int)
{
	int i;
	int k;

	k = i % 10;

	if (i < 0)
	{
		k = -k;
	}
	return (k);
}