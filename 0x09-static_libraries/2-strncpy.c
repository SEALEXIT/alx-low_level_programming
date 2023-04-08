#include "main.h"

/**
  * _strncpy - Coppies a number of string from one string to another
  * @dest: The string to be coppied to
  * @src: Location of the string to be compied
  * @n: Length of the string to be coppied
  * Return: The new coppied string
  */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
