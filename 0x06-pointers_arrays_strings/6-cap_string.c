#include "main.h"

/**
 * cap_string - function that capitalizes all words in a string.
 * @s: pointer to the string.
 * Return: pointer to the modified string.
 */

char *cap_string(char *s)
{
    int i = 0;

    /* Capitalize the first character if it's a lowercase letter */
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        s[i] = s[i] - 32;
    }

    while (s[i] != '\0')
    {
        /* Check for separators, and capitalize the next character if it's a lowercase letter */
6-cap_string.c        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';'
            || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '('
            || s[i] == ')' || s[i] == '{' || s[i] == '}')
        {
            i++;
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
        else
        {
            i++;
        }
    }

    return s;
}
