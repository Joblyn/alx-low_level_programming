#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print
 * if file cannot be opened or read, return 0
 * if filename is NULL, return 0
 * if write fails or does not write expected number of bytes
 * return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t file_rd, file_wr;
	char *buff;

	if (!filename)
		return (0);
	
	file_d = open(filename, O_RDONLY);

	if (!file_d)
		return (0);
	
	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	file_rd = read(file_d, buff, letters);
	file_wr = write(STDOUT_FILENO, buff, file_rd);

	close(file_d);

	free(buff);

	return (file_wr);
}
