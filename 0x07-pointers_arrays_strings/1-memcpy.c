#include "main.h"
/**
  * _memcpy - Coppies contents in one memory to another
  * @dest: memory destination
  * @src: memory source
  * @n: number of characters to be coppied.
  * Return: New String in the dest address
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
