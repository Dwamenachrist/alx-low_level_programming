#include "main.h"

/**
  * _memset - main function of the prototype
  *
  * @b: This is a pointer to the memory block that will be filled.
  *
  * @s: This is the value that will be used to fill the memory block.
  *
  * @n: This is the number of bytes to be filled.
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
