#include <stdio.h>
#include "graphics.c"
#include <stdlib.h>
#include <time.h>
#include <math.h>

void board()
{
    background();
    int number1,number2 = 9;
    colour cycle[] = {black, white};
    for(int row=0; row<10; row++)
    {
        number1 = number2;
        number2 = (number1+1)%2;
        for(int column=0; column<10; column++)
        {
            setColour(cycle[number2++%2]);
            fillRect(column*50,row*50,50,50);
        }
    }
}

void ball(int x, int y)
{
    clear();
    fillArc(x,y,40,40,0,360);
}

void move()
{
    foreground();
    setColour(red);
    int x = 150;
    int y = 0;
    int n = 0;
    srand((unsigned)time(NULL));
    int sx = 3;
    int sy = 3;
    while(1)
    {
        ball(x,y);
        x += sx;
        y += sy;
        sleep(15);
        if(x >= 460)
        {
            sx = -(rand()%3+2);
            sy = sqrt(18 - sx*sx);
        }
        if(y >= 460)
        {
            sx = -(rand()%3+2);
            sy = -sqrt(18 - sx*sx);
        }
        if(x <= 0)
        {
            sx = (rand()%3+2);
            sy = -sqrt(18 - sx*sx);
        }
        if(y <= 0)
        {
            sx = (rand()%3+2);
            sy = sqrt(18 - sx*sx);
        }
    }
}

int main(void)
{
    setWindowSize(500,500);
    board();
    move();
}