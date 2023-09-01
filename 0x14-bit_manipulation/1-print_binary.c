#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number using recursion.
 *
 * @n: The decimal number to print in binary.
 */
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int current;

for (i = 63; i >= 0; i--)
{
current = n >> i;

if (current & 1)
{
_putchar('1'); /*Output a '1' if the current bit is 1.*/
count++;
}
else if (count)
{
_putchar('0'); /*Output a '0' if there was at least one '1' before.*/
}
}

if (!count)
{
_putchar('0'); /*Output '0' if the input number was 0.*/
}
}
