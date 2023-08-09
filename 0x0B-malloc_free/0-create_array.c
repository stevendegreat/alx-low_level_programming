#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 ⦁create_array - create an array of chars
 ⦁@size: the size of the array
 ⦁@c: the char to fill in the array
 ⦁ 
 ⦁Return: the array filled
 */

char *create_array(unsigned int size, char c)
{
char *s;

if (size == 0)
return (NULL);
s = malloc(size * sizeof(char));
if (s == NULL)
{
printf("Memory allocation failed\n");
exit(1);
}
memset(s, (int) c, size);
return(s);
}
