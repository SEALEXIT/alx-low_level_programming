#include "main.h"

/**
  * _memcpy - Coppies content in one memory adress to another memory adress
  * @dest: Adress to be coppied to
  * @src: Source of the contents to be coppied to dest
  * @n: memory size to be coppied from src
  * Return: The new adress with coppied content in dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
