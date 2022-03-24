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

int dest_len, i;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

/*should end with a end of string char*/
dest[dest_len + i] = '\0';
return (dest);
}
