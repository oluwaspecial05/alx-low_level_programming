#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: Zero
 */
void times_table(void)
{
	int p, q, r, s, d;

	for (p = 0; p <= 9; p++)
	{
		for (q = 0; q <= 9; p++)
		{
			r = p * q;

			if (r > 9)
			{
				s = r % 10;
				d = (r - s) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(s + '0');
			}
			else
			{
				if (q != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(r + '0');
			}
		}

		_putchar('\n');
	}
}
