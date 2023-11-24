#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing 1's and 0's (binary number)
 *
 * Return: the number converted (Success) | 0 (Failure)
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint, pow;

	if (!b)
		return (0);

	for (i = 0; b[i] && (b[i] == '0' || b[i] == '1'); i++)
		;

	if (!b[i])
		return (0);

	--i;
	uint = 0;
	pow = 0;

	while (i >= 0)
	{
		uint += (b[i--] - '0') << (pow++);
	}

	return (uint);
}
