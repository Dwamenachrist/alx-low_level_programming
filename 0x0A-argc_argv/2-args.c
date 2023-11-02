#include <stdio.h>
                
#include "main.h"
                
                
/**
                
 * main – It would print all arguments
                
 * @argc: How many arguments
                
 * @argv: The array of arguments
                
 *
                
 * Return: Always 0 (Success)
                
 */
                
int main(int argc, char *argv[])
                
{
                
        int i;
                
                
        for (i = 0; i < argc; i++)
                
        {
                
                printf("%s\n", argv[i]);
                
        }
                
                
        return (0);
                
}
