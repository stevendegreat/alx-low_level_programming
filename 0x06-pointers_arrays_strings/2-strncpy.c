#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination string pointer.
 * @src: Source string pointer.
 * @n: Number of bytes to be used.
 *
 * Description:
 *    This function copies the first @n bytes of string @src to the
 *    destination string @dest. If @src is less than @n bytes long, the
 *    remaining bytes in @dest are filled with null bytes.
 *
 * Return: Pointer to destination string @dest.
 */
char *_strncpy(char *dest, const char *src, int n)
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

/* Break the line to avoid exceeding 80 characters */
return dest;
}
