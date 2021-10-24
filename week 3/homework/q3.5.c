#include <stdio.h>
#include <string.h>

char *English1[20] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen",
"fifteen","sixteen","seventeen","eighteen","nineteen"};

char *English2[8]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

int number;
void input()
{
    printf("enter a number \n");
    scanf("%i",&number);
}

void situation1()
{
    while(number>=0 && number<20)
    {
        int a;
        a = number % 20;
        printf("%s", English1[a]);
        break;
    }

}

void situation2()
{
    while(number>19 && number<100)
    {
        int b,c;
        b = number % 10;
        c = number / 10;
        if (b == 0)
        {printf("%s",English2[c-2]);}
        else
        {printf("%s %s", English2[c-2], English1[b]);}
        break;
    }
}

void situation3()
{
    while(number>99 && number<1000)
    {
        int d,e,f;
        d = number % 10;
        f = number / 100;
        e = (number - f*100)/10;
        if (d == 0 && e != 0)
        {printf("%s hundred and %s", English1[f], English2[e-2]);}
        else if(e == 0 && d != 0)
        {printf("%s hundred and %s", English1[f], English1[d]);}
        else if(e == 0 && d == 0)
        {printf("%s hundred",English1[f]);}
        else
        {printf("%s hundred and %s %s", English1[f], English2[e-2], English1[d]);}
        break;
    }
}

int main(void)
{
    input();
    situation1();
    situation2();
    situation3();
}

