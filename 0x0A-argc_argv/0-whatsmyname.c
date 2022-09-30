#include <stdio.h>
#define UNUSED(argc) (void)(argc)
/**
  *main - prints the name of its progara
  *
  *@argc: argument count
  *@argv: argument vector
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
