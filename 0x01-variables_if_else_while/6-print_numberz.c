#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
		putchar(digit++);
	putchar('\n');
	return (0);
}

