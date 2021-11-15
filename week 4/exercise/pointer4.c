#include <stdio.h>

int addUp(int *anArray, int length)
{
    int *p,*end,sum = 0;
    end  = anArray + length;
    for(p = anArray; p<end; p++)
    {
        sum += *p;
    }
    return sum;
}

int main(void)
{
    int anArray[] = {4,6,2,-1,6,8,12,-4};
    printf("Sum is %i\n",addUp(anArray,8));
}