#include "main.h"

/**
 * create_file - program creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file, status, texts = 0;

	if (filename == NULL) /*check if filename is present*/
		return (-1);

	/*open file by creating it and if it exists write but truncate to 0*/
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1) /*check if file creation was a success*/
		return (-1);

	if (text_content) /*write content to file if its not NULL*/
	{
		while (text_content[texts] != '\0') /*find number of words*/
			texts++;

		/*write to file*/
		status = write(file, text_content, texts);
		if (status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
