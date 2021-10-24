#include <stdio.h>
#include "graphics.c"

colour cycle[] = {blue, blue, blue, yellow, blue, yellow, yellow, yellow, blue, yellow};
int first,second = 7;
int row,column;

int main(void)
{
    for(row=0; row<20; row++)
    {
        first = second;
        second = (first+3)%10;
        for(column=0; column<20; column++)
        {
            setColour(cycle[second++%10]);
            fillRect(column*15,row*15,15,15);
        }
    }
}