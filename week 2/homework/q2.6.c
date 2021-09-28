#include <stdio.h>

int main(void)
{
    int row,column=0;
    for(row=0; row<9; row++)
    {
        if(row<5)
        {
            for(column=0; column<row; column++)
            {printf(" ");}
        
            for(column=row; column<5+row; column++)
            {printf("*");}
        }
        else
        {
            for(column=0; column<8-row; column++)
            {printf(" ");}
            for(column=8-row; column<13-row; column++)
            {printf("*");}
        }
        printf("\n");
    } 
}