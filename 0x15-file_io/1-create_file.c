#include "main.h"

/**
* create_file - function that creates a file.
* @filename: name of file
* @text_content: content of file
* Return: 1 if successful, -1 otherwise
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, _strlen(text_content));
	close(fd);
	return (1);
}

/**
* _strlen - Returns the length of a string
* @s: String to count
* Return: String length
*/
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;
	return (c);
}
