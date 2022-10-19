#include <stdio.h>

/**
 * main- Entry point
 * Return: Zero
 */
void lowercaseAlphabets(void)
{
	for (int c = 97; c <= 122; c++)
		printf("%c ", c);
	printf("\n");
	return (0);
}
