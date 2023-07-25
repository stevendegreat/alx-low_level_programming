#include <stdio.h>

/**
 * main - Generates the fixed valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[] = "Tada! Congrats";
    int i;

    /* Calculate the sum of the characters in the fixed password */
    int sum = 0;
    for (i = 0; password[i]; i++)
    {
        sum += password[i];
    }

    /* Adjust the last character of the password to reach the desired sum */
    password[i - 1] = 2772 - sum;

    /* Print the generated password */
    printf("%s\n", password);

    return (0);
}
