#include "main.h"

/**
 * set_bit - Sets the bit at the specified index to 1 in an unsigned long integer.
 * @n: A pointer to the unsigned long integer where the bit will be set.
 * @index: The index of the bit to set (0-based).
 *
 * This function sets the bit at the given index to 1 by performing a bitwise OR operation
 * with a mask containing a 1 at the specified index and 0s elsewhere.
 *
 * Return: 1 if the operation is successful, -1 if the index is out of bounds (greater than 63).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n |= (1UL << index);
return (1);
}
