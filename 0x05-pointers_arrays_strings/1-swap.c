#include "main.h"

/**
 * swap_int - Swaps the values of two integer variables.
 * @a: Pointer to the first integer variable.
 * @b: Pointer to the second integer variable.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
