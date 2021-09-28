#include <stdio.h>

int main(void)
{
    int a = 0;
    while (a++<13)
    {
        printf("%i * 13 = %i\n",a,a * 13);
    }
}