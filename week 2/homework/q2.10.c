#include <stdio.h>

int main(void)
{
    int row,column=0;
    for(row=0; row<8; row++)
    {

        for(column=0;column<row;column++)   
        {
            if((column==0)||(column==row-1))
            {printf("#");}

            else if(row==7)
            {printf("#");}

            else
            {printf(" ");}
        }

        for(column=row; column<7; column++)
        {
            if((column==6)||(column==row))
            {printf("*");}

            else if(row==0)
            {printf("*");}

            else{printf(" ");}
        }



        printf("\n");
    }
}