#include <stdio.h>

int hour,minute;
int changehour(int hour)
{
    if(hour>=0 && hour<=12)
    {hour = hour;}
    if(hour>12 && hour<24)
    {hour = hour - 12;}
    return hour;
}

int main(void)
{
    printf("enter the time \n");
    scanf("%i %i",&hour,&minute);
    if(hour>=0 && hour<=12)
    {
        printf("%i:%02iam.",changehour(hour),minute);
    }
    if(hour>12 && hour<24)
    {
        printf("%i:%02ipm.",changehour(hour),minute);
    }
    if(hour<0 || hour>23)
    {printf("it is invalid hour\n");}
    if(minute<0 || minute>59)
    {printf("it is invalid minute\n");}

}