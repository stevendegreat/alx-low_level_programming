#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination string pointer.
 * @src: Source string pointer.
 * @n: Number of bytes to be used.
 *
 * Return: Pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int count_of_bytes;
for (count_of_bytes = 0; count_of_bytes < n && src[count_of_bytes] != '\0'; count_of_bytes++)
{
dest[count_of_bytes] = src[count_of_bytes];
}
for (; count_of_bytes < n; count_of_bytes++)
{
dest[count_of_bytes] = '\0';
}

return dest;
}

