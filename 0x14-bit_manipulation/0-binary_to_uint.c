#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented as a string to an
 *                  unsigned integer.
 * @b: The binary string.
 *
 * Return: The converted unsigned integer, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec_val = 0;

if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_val = 2 * dec_val + (b[i] - '0');
}
return (dec_val);
}
