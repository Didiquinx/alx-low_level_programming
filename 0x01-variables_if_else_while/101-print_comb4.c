#include <stdio.h>

/**
 * main - program that prints all possible different conbinations
 * of three digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int n;
	int j;

	for (i - 48; i < 58; i++)
	{
		for (n = 48; n < 58; n++)
		{
			if (n > i)
			{
				for (j = 48; j < 58; j++)
				{
					if (j > n)
					{
						putchar(i);
						putchar(n);
						putchar(j);
						if (i != n && n != j && j < n && n < i)
						{
							break;
						}

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
