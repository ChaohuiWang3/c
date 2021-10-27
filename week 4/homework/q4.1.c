#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char  *stringCopy(char *s)
{
    char *buffer = malloc(sizeof(char) * strlen(s) + 1);
    *buffer = *s;
    while(*buffer++ = *s);
    return *buffer;
}