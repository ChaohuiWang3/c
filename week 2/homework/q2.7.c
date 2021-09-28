#include <stdio.h>

int main(void)
{
    int row,column=0;
    for(row=0; row<7; row++)
    {
        printf("*");
        if((row==0)||(row==6))
        {
            for(column=1; column<6; column++)
            {printf("*");}
        }

        else if((row==2)||(row==4))
        {
            printf(" ");
            for(column=2; column<5; column++)
            {printf("#");}
            printf(" ");
        }

        else if((row==3))
        {
            printf(" ");
            printf("#");
            printf(" ");
            printf("#");
            printf(" ");
        }

        else
        {
            for(column=1; column<6; column++)
            {printf(" ");}
        }
        printf("*");
        printf("\n");
    }

}