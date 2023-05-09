#include "main.h"
/**
 * create_file - creates a file with the given filename and writes the
 *               given text_content to it
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *
 * Description: If the file already exists, truncate it. The created file
 *              must have those permissions: rw-------
 *              If the file already exists, do not change the permissions.
 *              If filename is NULL return -1. If text_content is NULL,
 *              create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_written, text_len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
		num_written = write(fd, text_content, text_len);
		if (num_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
