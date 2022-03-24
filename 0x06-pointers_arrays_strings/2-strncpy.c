#include "main.h"
#include "string.h"
/**
 * _strncpy - to copy string from one to another 
 * @dest: the string to be pasted on;
 * @src: the string to be copied
 * @n: the number char we need to copy
 * Return: a string that points to a char copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
		*dest++ = *src++;
	if (!*src)
		while (*dest && n--)
			*dest++ = 0;
	return (ptr);
}
