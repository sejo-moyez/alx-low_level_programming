#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints the result of multiplication of two numbers
  *
  *@argc: number of arguments
  *@argv: array of arguments passed
  *
  *Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		if (!atoi(argv[count]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
