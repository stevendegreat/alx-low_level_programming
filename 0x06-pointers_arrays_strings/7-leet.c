#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * Letters 'a' and 'A' should be replaced by '4'.
 * Letters 'e' and 'E' should be replaced by '3'.
 * Letters 'o' and 'O' should be replaced by '0'.
 * Letters 't' and 'T' should be replaced by '7'.
 * Letters 'l' and 'L' should be replaced by '1'.
 *
 * @s: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
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
leetcount = 0;

/* Check whether leetletter is found */
while (leetcount < 10)
{
if (leetletters[leetcount] == s[string_length])
{
s[string_length] = leetNum[leetcount];
break; /* Added break to avoid unnecessary iterations */
}
leetcount++;
}
string_length++;
}

return s;
}
