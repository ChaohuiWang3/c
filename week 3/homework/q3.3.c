#include <stdio.h>

long initialnumber;
int lastdigit,newnumber,number;
void input()
{
    printf("enter the number \n");
    scanf("%i",&initialnumber);
}

int reverse()
{
    newnumber = 0;
    number = initialnumber;
    while(number > 0)
    {
        lastdigit = number%10;
        number = number/10;
        newnumber = newnumber*10 + lastdigit;
    }
    return newnumber;
}

int main(void)
{
    input();
    reverse();
    if(newnumber == initialnumber)
    {printf("it is a palindrome");}
    else
    {printf("it is not a palindrome");}
      
}


