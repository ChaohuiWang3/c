#include <stdio.h>
#include "graphics.c"

int x, y;
void circle()
{
  background();
  setColour(green);
  fillArc(150,50,200,200,0,360);
  setColour(white);
  fillArc(170,70,160,160,0,360);  
}

void square(int x, int y)
{
  clear();
  fillRect(x,y,43,43);
}

void move()
{
  foreground();
  setColour(blue);
  x= 150;
  y = 50;
  while(x>1)
  {
    for(int n=0; n<79; n++)
    {
      square(x, y);
      x += 2;
      sleep(15);
    }
    for(int n=0; n<79; n++)
    {
      square(x, y);
      y += 2;
      sleep(15);
    }
    for(int n=0; n<79; n++)
    {
      square(x, y);
      x -= 2;
      sleep(15);
    }
    for(int n=0; n<79; n++)
    {
      square(x, y);
      y -= 2;
      sleep(15);
    }
  }
}

int main(void)
{
  circle();
  move();
}