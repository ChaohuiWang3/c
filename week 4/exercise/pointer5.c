#include <stdio.h>

int stringLength(char *string)
{
    char *c = string;
    while(*c)++c;
    return c - string;
}

int main(void)
{
    char *s = "Hello";
    printf("Length is: %i\n",stringLength(s));
}