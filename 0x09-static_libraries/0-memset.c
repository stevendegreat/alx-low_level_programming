#include "main.h"
#include <string.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The byte to fill the memory with
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n) {
return (memset(s, b, n));
}
