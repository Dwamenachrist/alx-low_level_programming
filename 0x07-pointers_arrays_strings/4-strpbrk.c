#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: A pointer to the string in which the character will be searched.
  *
  * @accept: This is the character to be searched for in the string.
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[k] == accept[j])
	return (s + k);
	}
	}
	return (0);
}
