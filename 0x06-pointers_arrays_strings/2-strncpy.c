#include "main.h"

/**
* _strncpy - Copies a string.
* @dest: Destination string pointer.
* @src: Source string pointer.
* @n: Number of bytes to be used.
*
* Return: Pointer to destination string dest.
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
/* Break the line to avoid exceeding 80 characters */
return (dest);
}
