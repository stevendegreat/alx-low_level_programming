#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[12];
    int index = 0, sum = 0, diff_half1, diff_half2;

    srand(time(0));

    /* Generate the password */
    while (sum < 101)
    {
        password[index] = 33 + rand() % 94;
        sum += password[index++];
    }
    password[index] = '\0';

    /* Adjust the password to get the desired sum */
    if (sum != 101)
    {
        diff_half1 = (sum - 101) / 2;
        diff_half2 = (sum - 101) / 2;

        if ((sum - 101) % 2 != 0)
            diff_half1++;

        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff_half1))
            {
                password[index] -= diff_half2;
                break;
            }
        }

        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff_half2))
                password[index] -= diff_half2;
            break;
        }
    }

    /* Print the generated password */
    printf("%s\n", password);

    return (0);
}
