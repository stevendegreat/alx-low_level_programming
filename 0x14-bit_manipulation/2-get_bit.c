#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * a function that returns the value of a bit at a given index.
 * @n: number to search
 * @index: index of the bit
 * corded by stedegreat
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}
