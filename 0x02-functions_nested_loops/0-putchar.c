#include <unistd.h>
#include "main.h"

/**
 * main - prints out _putchar
 *
 * Return: 0
 *
 */

int main(void)
{
	char str[8] = " _putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);

	_putchar('\n');
	return (0);
}


