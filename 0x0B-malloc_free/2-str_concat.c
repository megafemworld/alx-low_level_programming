#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
  * str_concat - concantenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: NULL on failure otherwise pointer
  */

 char *str_concat(char *s1, char *s2)
 {
    char *t;
    int tlen, len1, len2, i = 0, j;
    int k = 0;

    if (s1 == 0)
	    s1 = "";
    if (s2 == 0)
	    s2 = "";
    len1 = strlen(s1);
    len2 = strlen(s2);
    tlen = len1 + len2 + 1;
    t = malloc(tlen * sizeof(char));
    if (t == NULL)
        return (NULL);
    while (s1[i] != '\0')
    {
	    if (*s1 == NULL)
		    t[i] = "";
	    else
		    t[i] = s1[i];
	    i++;
    }
    for (j = i; j <= len2; j++)
    {
	    if (*s2 == NULL)
	    t[i] = s2[k];
	    k++;
    }
    return (t);
 }
