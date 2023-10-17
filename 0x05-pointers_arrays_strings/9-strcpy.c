#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte,
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
        if (i >= 98)
            break;
    }
    dest[i] = '\0';

    return dest;
}
