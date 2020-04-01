#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to create or add content
 * @text_content: string to add to the file
 * Return: 1 success, -1 fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* file descriptor, letters it could read (plen:length) and plett:print*/
	int fadd, plen = 0, plett  = 0;

	if (filename)
	{
		/* create file */
		fadd = open(filename, O_APPEND | O_WRONLY);
		/* 0664 = (S_IRUSR  00400 + S_IWUSR  00200 */
		/* + S_IRGRP  00040 + S_IWGRP  00020 + S_IROTH  00004) */
		if (fadd == -1)
			return (-1);
		if (!text_content)/* create empty file */
			return (1);
		/* ## write content file */
		/* letters it could read */
		for (; text_content[plen] != '\0'; plen++)
		{}
		/* write content of file */
		plett = write(fadd, text_content, plen);
		if (plett == -1)
			return (-1);
		close(fadd);
		return (1);
	}
	return (-1);
}
