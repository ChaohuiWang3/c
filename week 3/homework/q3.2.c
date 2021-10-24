#include<stdio.h>

int base,number;
int power;
int inputpower;
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
    printf("enter the base and power number: \n");
    scanf("%i %i",&base,&inputpower);
    for(power=0; power<=inputpower; power++)
    {
        printf("%i ^ %i = %i\n",base,power,calculatepwoer(base,power));
    }
}
