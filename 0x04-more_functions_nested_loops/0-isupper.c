#include "main.h"

/**
 * _isupper - a function to test a character is upper or not
 * @c: an input character
 * Return: 1 if @c is uppercase otherwise 0
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
