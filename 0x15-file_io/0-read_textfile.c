#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to create
 * @letters: number of letters
 * Return: the actual number of letters prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* file descriptor, letters it could rlett:read and plett:print*/
	size_t fdescrip, rlett = 0, plett  = 0;
	char *str = NULL;

	if (filename)
	{
		/* open file */
		fdescrip = open(filename, O_RDONLY);
		if(fdescrip == -1)
			return (0);
		str = malloc(sizeof(char) * letters);/*reserve memory space */
		if (!str)
			return (0);
		/*## read contente file */
		/* letters it could read */
		rlett = read(fdescrip, str, letters);
		/* write content of file */
		plett = write(STDOUT_FILENO, str, rlett);
		if (rlett == -1 || plett == -1 )
			return (0);

		free(str);
		close(fdescrip);
		return (plett);
	}
	return (0);
}
