#include "main.h"

/**
 * _strlen - count the numbah of trhem characters in a string
 * @s: stringy given
 *
 * Return: them length
 */
size_t _strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * create_file - create file and add some text to it
 * @filename: the name of the fucking file
 * @text_content: content to be added to file later baby
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		if (write(fd, text_content, _strlen(text_content)) < 0)
			return (-1);
	close(fd);
	return (1);
}
