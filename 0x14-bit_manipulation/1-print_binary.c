#include "main.h"

/**
 * print_binary - prints tthe binary representation of a fucking decimal number
 * @n: decimal number i think lol
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;

	tmp = n >> 1;
	if (tmp)
		print_binary(tmp);
	tmp <<= 1;
	if (tmp == n)
		_putchar('0');
	else
		_putchar('1');
}
