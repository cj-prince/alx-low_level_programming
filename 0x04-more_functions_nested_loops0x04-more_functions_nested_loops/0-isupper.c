#include "main.h"

/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return:0 or 1
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