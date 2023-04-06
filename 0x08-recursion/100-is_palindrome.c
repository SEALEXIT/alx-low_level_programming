#include "main.h"

char order(char *so);
char re(char *rev);

/**
  * is_palindrome - Checks if string reverse and string are same ( Palindrome )
  * @s: The string
  * Return: 1 is palindrome else 0
  */

int is_palindrome(char *s)
{

	if (*s != '\0')
	{
		if (order(s) == re(s))
			return (1);
		else
			return (0);

	}
	else if (s == 0)
	{
		return (1);
	}
	return (is_palindrome(s + 1));

}

/**
  * order - Prints string in order
  * @so: the string
  * Return: String in order
  */

char order(char *so)
{
	if (*so != '\0')
	{
		return (_putchar(*so));
		order(so + 1);
	}
}

/**
  * re - prints string in reverse
  * @rev: the string
  * Return: Reversed string
  */
char re(char *rev)
{
	if (*rev != '\0')
	{
		re(rev + 1);
		return (_putchar(*rev));
	}
}
