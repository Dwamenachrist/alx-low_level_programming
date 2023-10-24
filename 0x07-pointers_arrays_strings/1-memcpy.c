#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: Source memory location from where the bytes will be copied.
  *
  * @dest: Destination memory location where the bytes will be copied.
  *
  * @n: The number of bytes to copy
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
