#include "main.h"

/**
 * _evaluate - evaluate function sqrt
 * @i: integer
 * @n: integer
 * Return: evaluate sqrt
 */
int _evaluate(int i, int n)
{
/* evaluate function */
if (n == 0 || n == 1)
return (n);
else if (i * i < n)
return (_evaluate(i + 1, n));
else if (i * i == n) /* condition base */
return (i);
else
return (-1);
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: integer
* Return: square root of n, or -1 if n has no natural square root
*/
int _sqrt_recursion(int n)
{
return (_evaluate(1, n)); /* call the helper function */
}
