#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
