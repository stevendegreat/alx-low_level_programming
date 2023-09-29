#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * a program that checks if a machine is little or big endian
 * coded by stevedegreat
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}

