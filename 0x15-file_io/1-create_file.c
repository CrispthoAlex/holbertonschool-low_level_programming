#include "holberton.h"

/**
 * create_file - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 success, -1 fails
 */
int create_file(const char *filename, char *text_content)
{
	/* file descriptor, letters it could read (plen:length) and plett:print*/
	int fcreate, plen = 0, plett  = 0;

	if (filename)
	{
		/* create file */
		fcreate = creat(filename, 0600);
		if (fcreate == -1)
			return (-1);
		if (!text_content)/* create empty file */
			return (1);
		/* ## write content file */
		/* letters it could read */
		for (; text_content[plen] != '\0'; plen++)
		{}
		/* write content of file */
		plett = write(fcreate, text_content, plen);
		if (plett == -1)
			return (-1);
		close(fcreate);
		return (1);
	}
	return (-1);
}
