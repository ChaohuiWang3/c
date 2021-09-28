#include <stdio.h>
#include "graphics.c"

int main(void)
{
    char name[] = "Dept. of Computer Science";
    char address1[] = "66-72 Gower Street";
    char address2[] = "London";
    char address3[] = "WC1E6BT";
    
    drawString(name,60,60);
    drawString(address1,60,80);
    drawString(address2,60,100);
    drawString(address3,60,120);

    return 0;
}