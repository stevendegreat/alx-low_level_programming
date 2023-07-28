#include <unistd.h>

/**
 * _putchar - Custom putchar function.
 * @c: The character to be printed.
 *
 * Return: On success, return the character printed.
 * On error, return -1 and set errno.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
