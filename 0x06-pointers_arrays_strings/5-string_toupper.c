#include "main.h"

/**
  * string_toupper - Capitalizes
  * @st: the string
  * Return: capitalized string
  */

char *string_toupper(char *st)
{
	int i;


	for (i = 0; i < sizeof(st); i++)
	{
		return (strupr(st[i]));
	}

}
