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
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
