#include "main.h"

/**
 *main - check the code.
 *
 * return: Always 0;
 */
int main(void)
{
int r;

r = _islower('h');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
