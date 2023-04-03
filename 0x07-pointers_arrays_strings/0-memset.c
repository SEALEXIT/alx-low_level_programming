#include "main.h"

/**
  * _memset - fills memory with constant byte 0x01
  * @s: The array
  * @b: the constant byte
  * @n: number of constants in array
  * Return: new array
  */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s + 0, b, n));
}
