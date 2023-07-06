#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - returns 1 if integer is prime otherwise return 0
 * @n: number
 * Return: 0 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if number is prime recursively
 * @n: number
 * @i: iterator
 * Return: 1 if prime number else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return(0);
	return (actual_prime(n, i - 1));
}
