#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4.
 * Letters e and E should be replaced by 3.
 * Letters o and O should be replaced by 0.
 * Letters t and T should be replaced by 7.
 * Letters l and L should be replaced by 1.
 * @s: pointer to string.
 * Return: pointer to s.
 */
char *leet(char *s)
{
    int string_length = 0;
    int leetcount;
    char leetletters[] = "aAeEoOtTlL";
    char leetNum[] = "4433007711";

    /* Scan through the string */
    while (s[string_length] != '\0')
    {
        /* Check whether leet letter is found */
        leetcount = 0;
        while (leetcount < 10)
        {
            if (leetletters[leetcount] == s[string_length])
            {
                s[string_length] = leetNum[leetcount];
                break; /* Once we find a match, no need to continue the inner loop */
            }
            leetcount++;
        }
        string_length++;
    }

    return s;
}
