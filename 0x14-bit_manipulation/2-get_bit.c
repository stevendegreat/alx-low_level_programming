#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at a given index in a decimal number.
 * @n: The decimal number to extract the bit from.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value (0 or 1) of the bit at the specified index, or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}
