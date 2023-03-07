#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer variable to char datatype
 * @: pointer variable to char datatype
 * Return: pointer to the first occurrence of the character c or NULL if none
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	}
	return ('\0');
}
