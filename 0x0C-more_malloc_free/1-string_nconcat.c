#include "main.h"

/**
  * string_nconcat - concatinates two strings and allocate memory in the heap
  * @s1: first string
  * @s2: second string
  * @n: no of strings to be concatinated in s2
  * Return: pointer to new string s1
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char ss1[100], ss2[100];
	char *string;
	int i, len;

	strcpy(ss1, s1);
	strcpy(ss2, s2);

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (n >= strlen(s2))
		strncat(ss1, ss2, strlen(ss2));
	else
		strncat(ss1, ss2, n);

	len = sizeof(ss1);

	string = (char *)malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
	{
		*(string + i) = ss1[i];
	}

	if (string == NULL)
		return (NULL);

	return (string);
}
