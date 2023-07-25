#include "main.h"

/**
 * print_rev - unction that prints a string, in reverse.
 * @s: the used string reference point
 *
 * return: 0
 */

void print_rev(char *s)
{
int start = 0;

while (s[start])
start++;
while (start++)
_putchar(s[start]);
_putchar('\n');
}
