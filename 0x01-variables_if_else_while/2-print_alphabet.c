#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
