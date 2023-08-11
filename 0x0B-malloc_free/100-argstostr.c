#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: the array of arguments
 * Return: a pointer to a new string, or NULL if it fails
 * or ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
char *str;
int len, i, j, k;

if (ac == 0 || av == NULL)
return (NULL);

len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}

str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}

str[k] = '\0';

return (str);
}
