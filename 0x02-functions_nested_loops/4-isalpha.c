#include "main.h"

/**
* _isalpha - checks if a character is an alphabet lowercase or uppercase
* @c: the character
* RETURN: 1 if letter is lowercase, 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return(0);
}
