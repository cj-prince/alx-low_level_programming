#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description - a function prints alphabet 10 times
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	a = 'a';
	i = 1;
	while (i <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		i++;
		_putchar('\n');
	}
}
