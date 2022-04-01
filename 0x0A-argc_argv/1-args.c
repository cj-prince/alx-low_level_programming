#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints all arguements it receives
 * @argc: The arguement counter
 * @argv: The arguement values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	(void)argv;
	while (--argc)
		sum++;
	printf("%i\n", sum);
	return (0);
}
