#include "graphics.c"
#include<stdio.h>

int main(void)
{
    int n = 0;
    for(n=0; n<130; n+=10)
    {
        drawOval(60,70,60+n,70+n);
    }
}