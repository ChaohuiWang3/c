#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>

char number[100];

int judge()
{
    long number1 = atoi(number);
    int n, i;
    n = 0;
    for(i=2; i<=number1; i++)
    {
        if(number1%i == 0)
        {n++;}
    }
    if(n == 1)
    {printf("it is a prime number \n\n\n");}
    else
    {printf("it is not a prime number \n\n\n");}
}

int check(char *s)
{
    int i;
    for( i=0;s[i];i++ )
    {
        if (!isdigit(s[i])) 
        {
            return 0;
        }
    }
    return 1; 
}

int main(void)
{
    while(number)
    {
        printf("enter the number \n");
        gets(number);
        if (strcmp(number, "stop") == 0) 
        break;
        if (check(number))
        {judge();}
        else
        {printf("it is not a valid number \n\n\n");}
    }
}