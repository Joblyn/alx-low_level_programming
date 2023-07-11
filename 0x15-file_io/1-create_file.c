#include "main.h"

/**
 * creat_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, n_letters, file_wr;
	
	if (!filename)
		return (-1);
	
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	
	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	
	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	file_wr = write(file_d, text_content, n_letters);

	if (file_wr == -1)
		return (-1);

	close(file_d);

	return (1);
}
