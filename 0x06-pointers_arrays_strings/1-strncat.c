#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to use.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;

/* Find the end of the destination string */
while (*dest != '\0')
dest++;

/* Copy at most n bytes from src to dest */
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

/* Append null terminator to the concatenated string */
*dest = '\0';

return (result);
}
