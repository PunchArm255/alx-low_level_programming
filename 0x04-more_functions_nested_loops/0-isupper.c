#include "main.h"

/**
 * _isupper - check the darn code
 * @c: character to check
 *
 * Return: 1 if is uppercase | 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
