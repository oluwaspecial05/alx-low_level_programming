#include <stdio.h>

/**
 * main- Entry point
 * Return: Zero
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar((num % 10) + '0');
		{
			if (num == '9')
			break;
			else
			{
				putchar(',');
			}
		}
	}
	putchar(' ');
	putchar('\n');
	return (0);
}
