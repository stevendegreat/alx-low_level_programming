#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
if (*s == '\0') /* base condition */
{
return (0);
}
return (1 + _strlen_recursion(++s)); /* recursive call */
}

/**
* p1 - palindrome
* @s: pointer to string
* @l: position
* Return: boolean
*/
int p1(char *s, int l)
{
if (l < 1) /* base condition */
{
return (1);
}
if (*s == *(s + l)) /* check if the first and last characters are equal */
{
return (p1(s + 1, l - 2)); /* recursive call */
}
else
{
return (0); /* not a palindrome */
}
}

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not
* @s: pointer to string
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int l = _strlen_recursion(s); /* get the length of the string */

return (p1(s, l - 1)); /* call the helper function */
}
