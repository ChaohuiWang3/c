#include <stdio.h>

int main(void)
{
    int row,column=0;
    for(row=0; row<4; row++)
    {
        printf("*");
        if((row==0)||(row==3))
        {
            for(column=1; column<4; column++)
            printf("*");
        }
        else
        {
            for(column=1; column<4; column++)
            {printf(" ");}
        }
        printf("*");
        printf("\n");
    }
}