#include "main.h"
#include <string.h>

/**
  * _strncat -  concatinates string upto n characters
  * @dest: string to concatinated
  * @src: string to be concatinated
  * @n: number of characters to concatinate
  * Return: concatinated string
  */

char *_strncat(char *dest, char *src, int n)
{

	return (strncat(dest, src, n));
}
