#include "main.h"

/**
 * _memcpy - a funxtion that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
