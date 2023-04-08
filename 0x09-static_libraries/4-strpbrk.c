#include "main.h"
/**
  * _strpbrk - Located the adress of the 1'St char that matches our char string
  * @s: string to be tested
  * @accept: Our character string
  * Return: Adress of the 1'st character in our accept string
  */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
