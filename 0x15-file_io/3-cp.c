#include "holberton.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: count arguments
 * @argv: arguments arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
/* file descriptors: fopen (file1) & f2open (file2), letters it could fread:read */
/* from file1 and plett:print to file2*/
	int fopen, f2open, fread = 0, plett  = 0;
	char stroutin[1024];/*string/buffer to copy from file 1*/

	if (argc == 3)/*will content two filenames*/
	{
		/* open file from copy*/
		fopen = open(argv[1], O_RDONLY);
		if (fopen == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

		/* open or create file2*/
		f2open = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		/* 0664 = (S_IRUSR  00400 + S_IWUSR  00200 */
		/* + S_IRGRP  00040 + S_IWGRP  00020 + S_IROTH  00004) */
		if (f2open == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

		/* ## write content to file */
		/* read bytes from file_from*/
		fread = 1024;
		while(fread == 1024)
		{
			fread = read(fopen, stroutin, 1024);
			/* write content to file */
			plett = write(f2open, stroutin, fread);
		}
		/*if copy file 1 to file 2 fails, exit*/
		if (fread == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (plett == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

		/*if can not close file descriptor*/
		if (close(fopen) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fopen), exit(100);
		if (close(f2open) == -1)
                        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2open), exit(100);

		return (0);
	}
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit (97);
}
