#include <stdio.h>

int main(void)
{
    int i1,i2;
    int *p1, *p2;

    i1 = 5;
    p1 = &i1;
    i2 = *p1;

    p2 = p1;
    *p2 = 3;

    return 0;
    
}