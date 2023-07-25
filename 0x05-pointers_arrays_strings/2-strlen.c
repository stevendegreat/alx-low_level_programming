#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
int string_length = 0;

while (s[string_length] != '\0')
{
string_length++;
}

return (string_length);
}
