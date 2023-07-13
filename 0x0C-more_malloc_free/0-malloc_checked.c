#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - that allocates memory using malloc.
 * @b: number of bytes to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
