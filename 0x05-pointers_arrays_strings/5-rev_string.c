#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 *
 * Return: void
 */

void rev_string(char *s)
{
int length = 0;
int half, i;
char temp;

/*Find the length of the string*/
while (s[length] != '\0')
length++;

half = length / 2;

for (i = 0; i < half; i++)
{
temp = s[length - i - 1];
s[length - i - 1] = s[i];
s[i] = temp;
}
}
