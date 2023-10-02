#include "main.h"

/**
 * read_textfile - Reads and prints a text file to POSIX std otpt.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read, print.
 *
 * Return: The number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char buffer[1024];

	if (!filename)
        return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (bytes_written);
}
