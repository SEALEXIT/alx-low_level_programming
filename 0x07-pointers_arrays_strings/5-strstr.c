#include "main.h"

/**
  * _strstr - Checking is string  needle exists in  string haystack
  * @haystack: String being scanned
  * @needle: Our small string
  * Return: Adress of the substring in mainstring
  */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
