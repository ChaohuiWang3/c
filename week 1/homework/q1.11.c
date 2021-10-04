#include<stdio.h>
#include"graphics.c"
#include<math.h>


int main(void)
{
    int x;
    double y;
    for(x=0; x<600; x++)
    {
        y = 150-(sin(x*(M_PI/180))*(90/M_PI_2));
        drawRect(x, (int)y,1,1);
    }
    return 0;
}