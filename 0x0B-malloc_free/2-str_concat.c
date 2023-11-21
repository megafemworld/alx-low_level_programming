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
    int tlen, len1, len2, i, j, n;
    int k = 0;

    if (s1 == NULL)
        s1 = "";
    else if (s2 == NULL)
        s2 = "";
    len1 = strlen(s1);
    len2 = strlen(s2);
    tlen = len1 + len2 + 1;
    t = malloc(tlen * sizeof(char));
    if (t == NULL)
        return (NULL);
    for (i = 0; i < len1; i++)
    {
        t[i] = s1[i];
        n++;
    }
    n = n + 1;
    for (j = n; j <= len2; j++)
    {
        t[j] = s2[k];
        k++;
    }
    return (t);
 }