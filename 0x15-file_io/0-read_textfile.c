#include "main.h"

/**
  * read_textfile - reads a textfile and prints it to the POSIX stdOutput
  * @filename: the name of the file
  * @letters: Length of the filename
  * Return: actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);

	return (w);
}
