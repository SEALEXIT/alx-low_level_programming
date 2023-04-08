#include "main.h"

/**
  * _memset - Sets the memory adress with constant character/variable
  * @s1: The memory adress to be set with character
  * @b: the constant character
  * @n: The number of memory adresses to be assigned the constant character
  * Return: the new adress s1 with constant character set in memory
  */

char *_memset(char *s1, char b, unsigned int n)
{
	return (memset(s1, b, n));
}
