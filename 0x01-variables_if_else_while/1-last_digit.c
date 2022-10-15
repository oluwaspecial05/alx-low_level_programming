#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point of the program
 * Return: Zero
 */
int main(void)
{
	int n;
	int digit1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit1 = n % 10;
	{
		if (digit1 > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, digit1);
		else if (digit1 == 0)
			printf("Last digit of %d is %d and is 0\n", n, digit1);
		else if (digit1 < 6 && digit1 != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit1);
	}
	return (0);
}
