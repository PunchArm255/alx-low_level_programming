#include "main.h"

/**
 * get_bit - get the fucking value of some random ass bit at a given index
 * @n: number help
 * @index: given index please
 *
 * Return: value of bit | -1 (Error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index >= 64)
		return (-1);
	for (i = 0; i < index; i++)
		n >>= 1;
	i = n;
	n >>= 1, n <<= 1;
	if (i == n)
		return (0);
	else
		return (1);
}
