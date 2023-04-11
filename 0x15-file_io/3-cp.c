#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes  descriptors.
 * @fd: The file to be closed.
 */
void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied t.
 * @argv: An array of pointers .
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - code 97.
 * If file_from does not exist or cannot be read - code 98.
 * If file_to cannot be created or written to - code 99.
 * If file_to or file_from cannot be closed - code 100.
 */

int main(int argc, char *argv[])
{
	int fromo, too, ro, wo;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fromo = open(argv[1], O_RDONLY);
	ro = read(from, buffer, 1024);
	too = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromo == -1 || ro == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wo = write(to, buffer, r);
		if (too == -1 || wo == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		ro = read(from, buffer, 1024);
		too = open(argv[2], O_WRONLY | O_APPEND);

	} while (ro > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
