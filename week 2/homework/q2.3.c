#include <stdio.h>

int main(void)
{
    int a = 1;
    do 
    {
        printf("%i * 13 = %i\n",a,a * 13);
    }while(++a<14);
}