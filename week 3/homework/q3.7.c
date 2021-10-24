#include <stdio.h>
#include <string.h>


int number;
int a,b,c;
int m = 0;

int judge(int number)
{
    int n, i;
    n = 0;
    for(i=2; i<=number; i++)
    {
        if(number%i == 0)
        {n++;}
    }
    if(n == 1)
        return 1;
    else    
        return 0;    
} 

int main(void)
{
    printf("enter the range \n");
    scanf("%i %i",&a,&b);
    int list[b];
    for(c=a; c<=b; c++)
    {
        if(judge(c))
        {
            list[m] = c;
            m++;
        }
    }
    int len = m;
    for(m=0; m<=len-2; m++)
    {
        int d = list[m+1] - list[m];
        if(d<=2)
        {
            printf("(%i,%i) ",list[m],list[m+1]);
        }
    }
}