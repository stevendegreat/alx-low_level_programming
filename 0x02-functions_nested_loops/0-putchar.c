#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a new line using the _putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "_putchar\n";
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

return (0);
}

/* _putchar function definition */
int _putchar(char c)
{
return write(1, &c, 1);
}
