#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 * Return: 1 for the positive number, -1 for the negative number, or 0 for anything else
 */

int print_sign(int n)
{
    if (n > 0)
    {
        _putchar(43); // '+' character
        return (1);
    }
    else if (n < 0)
    {
        _putchar(45); // '-' character
        return (-1);
    }
    else
    {
        _putchar(48); // '0' character
        return (0);
    }
}
