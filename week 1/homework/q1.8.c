#include "graphics.c"
#include<stdio.h>

int main(void)
{
    int n = 0;
    while (n<150)
    {
        drawOval(60,60,60+n, 70+n);
        n += 10;
    }
    return 0;
}