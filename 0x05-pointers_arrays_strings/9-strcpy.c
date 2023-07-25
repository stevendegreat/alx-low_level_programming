#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
