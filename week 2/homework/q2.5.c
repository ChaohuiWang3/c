#include <stdio.h>

int main(void)
{
    int row,column=0;
    for(row=0; row<6; row++)
    {   
        for(column=0; column<row; column++)
        {printf(" ");}
        
        for(column=row; column<6; column++)
        {printf("*");}
        printf("\n");
    } 
}