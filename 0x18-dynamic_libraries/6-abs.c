#include "main.h"
/**
 * _abs - make every number positive
 * @n: any integer number
 * Return: n if the number is positive -n if negative
 */

int _abs(int n)
{

  return (n >= 0 ? n : n * -1);
}