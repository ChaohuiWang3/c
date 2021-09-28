#include "graphics.c"
#include <math.h>
const int WIDTH_X = 500;
const int HEIGHT_Y = 300;
int main(void)
{
 int centreX = WIDTH_X / 2;
 int centreY = HEIGHT_Y / 2;
 int sideLength = 150;
 int circleDiameter = 
 (int)sqrt(sideLength * sideLength + sideLength * sideLength);
 int halfSideLength = sideLength / 2;
 int circleRadius = circleDiameter / 2;
 drawArc(centreX - circleRadius, centreY - circleRadius, 
 circleDiameter, circleDiameter, 0, 360);
 drawRect(centreX - halfSideLength, centreY - halfSideLength, 
 sideLength, sideLength );
 return 0;
}