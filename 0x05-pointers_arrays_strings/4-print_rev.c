#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Return: void
 */
void print_rev(char *s)
{
int length = 0;

/* Find the length of the string */
while (s[length])
length++;

/* Print the string in reverse */
while (length--)
_putchar(s[length]);

_putchar('\n');
}
