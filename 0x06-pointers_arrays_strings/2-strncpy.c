#include "main.h"
#include <string.h>

/**
  * _strncpy - coppies string upto n characters
  * @dest: string
  * @src: String to be copied
  * @n: number of characters to be coppied.
  * Return: The coppied text
  */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
