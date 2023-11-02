#include <stdio.h>
                
#include "main.h"
                
                
/**
                
 * main – It should print the name of the code
                
 * @argc: How many arguments
                
 * @argv: An array of arguments
                
 *
                
 * Return: Always 0 (Success)
                
 */
                
int main(int argc __attribute__((unused)), char *argv[])
                
{
                
        printf("%s\n", *argv);
                
                
        return (0);
                
}
