#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: The pointer to the source memory location from where the bytes will be copied.
  *
  * @dest: The pointer to the destination memory location where the copied bytes will be stored.
  *
  * @n: The number of bytes to be copied.
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
