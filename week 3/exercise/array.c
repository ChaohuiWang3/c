#include <stdio.h>

int main(void)
{
    int anArray[] = {4,6,2,-1,6,8,12,-4};
    int n = 0, sum = 0;
    for(n = 0; n < 8; n++)
    {
        sum += anArray[n];
    }
    printf("Sum is: %i\n",sum);
}