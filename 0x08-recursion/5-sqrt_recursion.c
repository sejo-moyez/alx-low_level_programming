#include "main.h"

int square(int n, int sqr);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
  * square - Calculates natural square root
  * @n: number to calculate the square root
  * @sqr: iterate number
  *
  * Return: the natural square root or -1 if no square root
  */
int square(int n, int sqr)
{
 if ((sqr * sqr) == n)
  return (sqr);
 else if (sqr > (n / 2))
  return (-1);
 return (square(n, sqr + 1));
}
