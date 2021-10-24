#include<stdio.h>

int lower,upper,result;
void input()
{
    printf("enter lower and upper bound \n");
    scanf("%i %i", &lower, &upper);
} 

int calculate()
{
    result = lower;
    while(lower < upper)
    {
        result = result * (lower+1);
        lower += 1;
    }
    return result;
}

int main(void)
{
    input();
    printf("%i",calculate());
}