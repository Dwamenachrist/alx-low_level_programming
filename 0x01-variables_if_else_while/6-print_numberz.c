#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints char below 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int me;

	for ( me = 0; me < 10; me++)
		putchar(me + '0');

	putchar('\n');
	return (0);
}
