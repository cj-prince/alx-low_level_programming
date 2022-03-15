#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - printing a number starting from n to 98
 * @n: input integer argument
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	} else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}
