#include "graphics.c" 
#include <math.h> 
#define PI 3.14159265
int main(void)
{ 
 int width = 600;
 int height = 300;
 int x = 0;
 while(x<1000)
 { 
     x += 1;
    double y = (height / 2) - sin(x*(PI/180)) * 100;
    drawRect(x,(int)y,1,1);
 }
 return 0;
}