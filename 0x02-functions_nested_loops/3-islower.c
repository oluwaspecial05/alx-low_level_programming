#include "main.h"

/**
 *_islower - checks for lowercase character
 *
 * @c: character to be checked
 *
 * return: 1 if c is lowercase else 0 if anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
