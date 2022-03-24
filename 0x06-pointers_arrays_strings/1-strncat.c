#include "main.h"
#include "string.h"
/**
 * _strncat - a function that concatenate two strings upto n bytes
 * @dest: the first string we need to concatente and return
 * @src: the second argument
 * n: the size of the string we need to concatenate
 * Return: string returned
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
