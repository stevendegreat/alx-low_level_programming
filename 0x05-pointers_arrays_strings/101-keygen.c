#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the
 * program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
    char password[84];
    int index = 0, sum = 0, diff_half1, diff_half2;

    srand(time(0));

    while (sum < 2772)
    {
        password[index] = 33 + rand() % 94;
        sum += password[index++];
    }

    password[index] = '\0';

    while (sum != 2772)
    {
        diff_half1 = (sum - 2772) / 2;
        diff_half2 = (sum - 2772) / 2;

        if ((sum - 2772) % 2 != 0)
            diff_half1++;

        // First pass of adjustment
        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff_half1))
            {
                password[index] -= diff_half1;
            }
        }

        // Second pass of adjustment
        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff_half2))
            {
                password[index] -= diff_half2;
            }
        }

        sum = 0;
        for (index = 0; password[index]; index++)
        {
            sum += password[index];
        }
    }

    if (index == 15)
    {
        printf("Tada! Congrats\n");
    }
    else
    {
        printf("Wrong password\n");
    }

    printf("%s\n", password);
    return (0);
}
