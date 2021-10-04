#include <stdio.h>
#include "graphics.c"

int main(void)
{
    char name[] = "Computer Science Department";
    char address1[] = "University College London";
    char address2[] = "Gower Street";
    char address3[] = "London";
    char postcode[] = "WC1E 6BT";
    
    drawString(name,60,60);
    drawString(address1,60,80);
    drawString(address2,60,100);
    drawString(address3,60,120);
    drawString(postcode,60,140);

    return 0;
}

