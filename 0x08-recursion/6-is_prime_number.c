#include "main.h"

int _prime(int n, int i);
/**
  * is_prime_number - checks if n is a prime number
  * @n: Number being checked
  * Return: 1 if prime number 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));

}

/**
  * _prime - finds if number is prime
  * @n: number to be evaluated
  * @i: iterator
  * Return: 1 or 0
  */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}

