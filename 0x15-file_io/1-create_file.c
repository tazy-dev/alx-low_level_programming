/*
 * 1-create_file.c
 * Auth: tazy-dev
 */

#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: The string to write to the file.
 *
 * Return: On fail (-1) Otherwise (1).
 */
int create_file(const char *filename, char *text_content)
{
	int _open, _write, len = 0;

	if (filename == NULL)
		return (-1);
	/*calc length to determine the number of bytes to */
	/*be transfered if not empty*/
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	/*0600 gives R&W permission only to thr owner of the file*/
	/*O_CREAT : to create a file if it doesn't exist*/
	/*O_RDWR : open a file with read and write*/
	/*O_TRUNC : if file exist truncates to the beginning*/
	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(_open, text_content, len);

	if (_open == -1 || _write == -1 || _write != len)
		return (-1);

	close(_open);

	return (1);
}
