#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates the fixed valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[] = "Tada! Congrats";
    int sum = 0, i;

    srand(time(0));

    /* Calculate the sum of the characters in the fixed password */
    for (i = 0; password[i]; i++)
    {
        sum += password[i];
    }

    /* Generate additional random characters to reach the desired sum */
    while (sum < 2772)
    {
        char random_char = 33 + rand() % 94;
        sum += random_char;
        putchar(random_char);
    }

    putchar('\n');

    return (0);
}

