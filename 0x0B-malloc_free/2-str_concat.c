#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */

int strl_len(char *str);

char *str_concat(char* s1, char * s2)
{
    int i;
    char *m;
    int len_1, len_2;
    len_1 = strl_len(s1);
    len_2 = strl_len(s2);
    
    m = malloc ((len_1 + len_2 +1)* sizeof(char));
    if (m == NULL)
        return(NULL);
    for (i = 0; i< len_1; i++)
        m[i] = s1[i];
    for (i = 0; i< len_2; i++)
    {
        m ++;
        *m = s2[i];
    }
    m ++;
    *m = '\0';
    
    return(m);
    
}
/**
  * str_len - checks the lenth of a string
  * @s1: string to be checked for 
  *
  * Return: the lengthe of the string
  */
int strl_len(char *str)
{
    int len = 0;

    while(*str == '\0')
    {
        len ++;
        str ++;
    }
    return(len);
}
