#include <stdio.h>

int main(void)
{
    int row,column=0;
    for(row=0; row<9; row++)
    {   
        printf("*");
        if((row>0)&&(row<5))
        {
            for(column=1; column<row; column++)
            {printf(" ");}
            printf("*");
        }

        if((row>4)&&(row<8))
        {
            for(column=1; column<8-row; column++)
            {printf(" ");}
            printf("*");
        }
        
        printf("\n");
    }
}