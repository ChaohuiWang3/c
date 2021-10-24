#include<stdio.h>

int number,total;
int factorial(int number)
{
    int i = 1;
    int sum = 1;
    for(i=1; i<=number; i++)
    {
        sum = sum*i;
    }
    return sum;
}

int devide(int number)
{
    total = 0;
    while(number>0)
    {
        int a = number%10;
        number = number/10;
        total = total + factorial(a);
    }
    return total;
}
int main(void)
{
    int a,b;
    printf("enter the range \n");
    scanf("%i %i",&a, &b);
    for(number=a; number<=b; number++)
    {
        if(devide(number) == number)
        {
            printf("%i ",devide(number));
        }
        else
        {
            printf("");
        }
    }
}