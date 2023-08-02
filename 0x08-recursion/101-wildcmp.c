#include "main.h"

/**
 * wildcmp - Compare strings with wildcard support
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2) /* change the parameters from char to char * */
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*') /* check if s2 has a wildcard */
{
return (wildcmp(s1, s2 + 1)); /* recursive call */
}
return (*s2 == '\0'); /* check if both strings are empty */
}
if (*s2 == '*') /* check if s2 has a wildcard */
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)); /* recursive call */
}
else if (*s1 == *s2) /* check if the characters are equal */
{
return (wildcmp(s1 + 1, s2 + 1)); /* recursive call */
}
return (0); /* not identical */
}
