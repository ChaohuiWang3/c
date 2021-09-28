#include <stdio.h>

int main(void)
{
    int row,column=0;
    for(row=0; row<6; row++)
    {
        if(row%2==0)
        {
            printf("*");
            printf("#");
            printf("*");
            printf("#");
            printf("*");
            printf("#");
        }
        
        else
        {
            printf("#");
            printf("*");
            printf("#");
            printf("*");
            printf("#");
            printf("*");
        }
        printf("\n");
    }
}