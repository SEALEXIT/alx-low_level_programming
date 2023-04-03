#include "main.h"

/**
  * _strspn - Locates first character different in string accept from string s
  * @s: string being tested if it has different character
  * @accept: string with all character we want
  * Return: Location of first different character
  */
unsigned int _strspn(char *s, char *accept)
{

	return (strspn(s, accept));
}
