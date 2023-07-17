#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	/* Print lowercase alphabet */
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	/* Print uppercase alphabet */
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
