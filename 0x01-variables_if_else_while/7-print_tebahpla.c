#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
		putchar(letter--);
	putchar('\n');
	return (0);
}
