#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: array
 * @n: number of elements of the array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0, i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
