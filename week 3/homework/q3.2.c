#include<stdio.h>

int base,number;
int power;
int calculatepwoer(int base, int number)
{
    int initial;
    initial = 1;
    for(number=0; number<power; number++)
    {initial = initial * base;}
    return initial;
}

int main(void)
{
    printf("enter the base number: \n");
    scanf("%i",&base);
    for(power=0; power<10; power++)
    {
        printf("%i ^ %i = %i\n",base,power,calculatepwoer(base,power));
    }
}
