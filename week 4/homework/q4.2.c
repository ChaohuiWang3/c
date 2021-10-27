#include <stdio.h>
#include <string.h>

int strend(char *s, char *t)
{
    int length = strlen(s);
    int end = s + length;
    if(end == t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
