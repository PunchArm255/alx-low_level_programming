#include "main.h"

/**
 * read_textfile - read print text from a file to stdout hopefully
 * @filename: the name of the fucking file lmao
 * @letters: number of letters to be deadass read and printed broskiiiii
 *
 * Return: actual numbaaah of them read and printed letters like fr fr bruh
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *s;
	ssize_t rsize, wsize;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (!s)
		return (0);
	rsize = read(fd, s, letters);
	if (rsize < 0)
	{
		free(s);
		return (0);
	}

	s[rsize] = '\0';
	close(fd);

	wsize = write(STDOUT_FILENO, s, rsize);
	if (wsize < 0)
	{
		free(s);
		return (0);
	}
	free(s);
	return (wsize);
}
