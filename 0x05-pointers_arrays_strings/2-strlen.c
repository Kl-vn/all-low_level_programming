#include "main.h"
/**
 * _strlen - to print the length of a string as an integer.
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int land = 0;

	while (*s != '\0')
	{
		land++;
		s++;
	}

	return (land);
}
