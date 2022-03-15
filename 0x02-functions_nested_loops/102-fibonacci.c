#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i, n;
	long f1, f2, next;

	f1 = 1;
	f2 = 2;
	n = 50;

	for (i = 0; i < n; i++)
	{
		if (i == 49)
		{
			printf("%ld", f1);
		} else
		{
			printf("%ld, ", f1);
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}
	}
	printf("\n");
	return (0);
}
