#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
int dest_len = 0, src_len = 0;

/* Calculate the length of the destination string */
while (dest[dest_len] != '\0')
dest_len++;

/* Append the source string to the destination */
while (src[src_len] != '\0')
{
dest[dest_len] = src[src_len];
dest_len++;
src_len++;
}

/* Add the null terminator to the concatenated string */
dest[dest_len] = '\0';

return (dest);
}

