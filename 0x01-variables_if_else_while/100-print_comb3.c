#include <stdio.h>

/**
*main - prints all possible combinations of numbers
*Return: always 0
*/
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
		if (a == b || b < a)
			continue;
		putchar (a);
		putchar (b);
		if (a != 56 || (a == 56 && b != 57))
		{
			putchar (',');
			putchar (' ');
		}
		}

	}
	putchar ('\n');
	return (0);
}
