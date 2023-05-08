#include "main.h"

/**
  * append_text_to_file - appends content to the file
  * @filename: Name of the file
  * @text_content: Contents of the file appended
  * Return: 1 if succeeded, -1 if not
  */

int append_text_to_file(const char *filename, char *text_content)
{

	int o, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}

