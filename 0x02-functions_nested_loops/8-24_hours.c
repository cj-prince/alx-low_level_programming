#include "main.h"

/**
 * jack_bauer - print every minut oo:oo to 23:59
 * Return: Always void
 */
void jack_bauer(void)
{
    int i, j;

    for (i = 0; i < 24; i++)
    {
        for (j = 0; j < 60; j++)
        {
            _putchar(i / 10 + 48);
            _putchar(i % 10 + 48);
            _putchar(':');
            _putchar(j / 10 + 48);
            _putchar(j % 10 + 48);
            _putchar('\n');
        }
    }
}