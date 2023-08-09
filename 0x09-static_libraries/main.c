#include "main.h"

int main(void)
{
_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
return (0);
}

void _puts(char *s)
{
int i = 0;
    
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
}
