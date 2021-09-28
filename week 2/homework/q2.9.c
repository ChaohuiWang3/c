#include <stdio.h>

int main(void)
{
    int row,column=0;
    for(row=0; row<9; row++)
    {   
        if(row<5)
        {
            for(column=0; column<5; column++)
            {
                if((column==0)||(column==row))
                {printf("*");}
            
                else
                {printf(" ");}
            }
        }
        
        else
        {
            for(column=0; column<5; column++)
            {
                if((column==0)||(column==8-row))
                {printf("*");}

                else
                {printf(" ");}
            }
        }
        printf("\n");
    }
}