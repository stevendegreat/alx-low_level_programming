#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: pointer block of memory to fill
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
if (n == 0) /* base conditions */
return (1);
else if (n < 0) /* base conditions */
return (-1);
else
return (n * factorial(n - 1)); /* recursive call */
}
