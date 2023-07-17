#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i == 8 && j == 9)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}

			j++;
		}

		i++;
	}

	return 0;
}
