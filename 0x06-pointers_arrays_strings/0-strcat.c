#include "main.h"
#include <string.h>

/*
 * *_strcat - concatenates two strings
 *
 * @c - stings to be concatenated
 *
 * Return: retuns a string that has been concatenated
 */
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
