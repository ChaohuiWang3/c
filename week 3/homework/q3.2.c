#include<stdio.h>

int x,y;
int power;
int calculatepwoer(int x, int y)
{
    int a;
    a = 1;
    for(y=0; y<power; y++)
    {a = a*x;}
    return a;
}

int main(void)
{
    printf("enter the base number: \n");
    scanf("%i",&x);
    for(power=0; power<10; power++)
    {
        printf("%i ^ %i = %i\n",x,power,calculatepwoer(x,power));
    }
}
