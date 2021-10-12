#include<stdio.h>
#include"graphics.c"
#include<math.h>

int n;
double x,y,angle,radius;
int main(void)
{
    for(n=0; n<3600; n++)
    {
        angle += M_PI/180;
        radius = n/50;
        x = 230 + 100 * cos(angle);
        y = 150 + 100 * sin(angle);
        drawRect((int)x,(int)y,1,1);
    }
}