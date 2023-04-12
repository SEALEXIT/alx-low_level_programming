#include "main.h"

/**
  * str_concat - concatinates two strings and returns address of new string
  * @s1: first string
  * @s2: second string
  * Return: adress of new string
  */

char *str_concat(char *s1, char *s2)
{
	int size, i;
	char *s3;


	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	strcat(s1, s2);

	size = strlen(s1);

	s3 = (char *)malloc(size * sizeof(char));

	while (i < size)
	{
		*(s3 + i) = s1[i];
		i++;
	}

	return (s3);
}
