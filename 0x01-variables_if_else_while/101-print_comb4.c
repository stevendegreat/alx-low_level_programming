#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of
 * three digits in ascending order, separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit1, digit2, digit3; / Variables to store the digits /

    for (digit1 = 0; digit1 <= 9; digit1++)
    {
        for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
        {
            for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
            {
                putchar(digit1 + '0'); / Print first digit /
                putchar(digit2 + '0'); / Print second digit /
                putchar(digit3 + '0'); / Print third digit /

                if (digit1 < 7 || digit2 < 8 || digit3 < 9)
                {
                    putchar(','); / Print comma /
                    putchar(' '); / Print space /
                }
            }
        }
    }

    putchar('\n'); / Print newline /

    return (0);
}
