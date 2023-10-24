#include "main.h"

/**
  * _strchr - main function
  *
  * @s: The pointer to the string in which the character will be searched.
  *
  * @c: The character to be searched for in the string.
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
