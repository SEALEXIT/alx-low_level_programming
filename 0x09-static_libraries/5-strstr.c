#include "main.h"

/**
  * _strstr - CHecks if our substring is present in the main string
  * @haystack: the Main String
  * @needle: The substring
  * Return: Address of the substring in the main string
  */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
