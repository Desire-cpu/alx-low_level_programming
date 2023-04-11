#include "main.h"

/**
 * append_text_to_file - a funcion that appends text at the end
 *                      of a file
 *
 * @filename: file to add data to
 * @text_content: text content to add to file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int pill;
	int letters;
	int read;

	if (!filename)
		return (-1);

	pill = open(filename, O_WRONLY | O_APPEND);

	if (pill == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		read = write(pill, text_content, letters);

		if (read == -1)
			return (-1);
	}

	close(pill);

	return (1);
}
