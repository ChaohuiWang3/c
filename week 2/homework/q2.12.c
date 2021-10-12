#include<stdio.h>
#include"graphics.c"
#include<math.h>
#include<stdlib.h>


int x;
double y;
int width = 720;
int height = 400;

void xaixs()
{
    drawLine(0,height/2,width,height/2);
    for(x=1; x<13; x++)
    {
        drawLine(x*60,height/2,x*60,height/2-10);
        char strx[0];
        sprintf(strx,"%i",-360+x*60);
        drawString(strx,x*60-10,height/2+15);
    }
}

void yaxis()
{
    drawLine(width/2,0,width/2,height);
    for(x=1; x<11; x++)
    {
        drawLine(width/2,x*40,width/2+10,x*40);
        char str[0];
        sprintf(str,"%.1f",2.5-x*0.5);
        drawString(str,width/2-25,x*40);
    }
}


void sinx()
{
    for(x=0; x<width; x++)
    {
        setColour(red);
        y = height/2-(sin(x*(M_PI/180))*(90/M_PI_2));
        drawRect(x, (int)y,1,1);
    }
}

void cosx()
{
    for(x=0; x<width; x++)
    {
        setColour(blue);
        y = height/2-(cos(x*(M_PI/180))*(90/M_PI_2));
        drawRect(x, (int)y,1,1); 
    }
}

void tanx()
{
        for(x=0; x<width; x++)
    {
        setColour(yellow);
        y = height/2-(tan(x*(M_PI/180))*(90/M_PI_2));
        drawRect(x, (int)y,1,1); 
    }
}

int main(void)
{
    setWindowSize(width, height);
    xaixs();
    yaxis();
    sinx();
    cosx();
    tanx();
}
