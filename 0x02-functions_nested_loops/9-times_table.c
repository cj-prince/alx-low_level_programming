#include "main.h"
/**
 * times_table -  print a time table
 * Return: void
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			res = i * j;
			_putchar(',');
			_putchar(' ');
			if (res >= 10)
			{
				_putchar(res / 10 + 48);
				_putchar(res % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(res + 48);
			}
		}
	_putchar('\n');
	}
}
