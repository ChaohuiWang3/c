#include<stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main(void)
{
    printf("x + y = %i\n", add(50,25));
    printf("x + y = %i\n", add(100,50));
    return 0;
}