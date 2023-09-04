#include "main.h"

/**
 * clear_bit - Clears a specific bit in a given number.
 * @n: Pointer to the number whose bit will be cleared.
 * @index: The index of the bit to clear (0-based, from right to left).
 *
 * Return: 1 if successful, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
