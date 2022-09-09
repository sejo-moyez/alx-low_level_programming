#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints alphabet in small and caps
 *
 * Return: 0 
 */

/* betty style doc for function main goes there */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
	        putchar(c);
	putchar('\n');

	return (0);
}
