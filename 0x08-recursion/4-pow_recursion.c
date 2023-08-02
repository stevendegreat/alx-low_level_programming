#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: x to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
if (y < 0) /* base condition */
{
return (-1);
}
else if (y != 0)
return (x * _pow_recursion(x, y - 1)); /* recursive call */
else
return (1);
}
