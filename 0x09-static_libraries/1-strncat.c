#include "main.h"

/**
  * _strncat - concatinates a number of strings from one string to another
  * @dest: String to be concatinated to
  * @src: Source of the string to be concatinated
  * @n: size  of the string to be extracted
  * Return: The new concatinated string
  */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
