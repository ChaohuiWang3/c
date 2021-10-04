#include "graphics.c"

int main(void)
{
    //draw Xaxis
    drawLine(30, 250, 300, 250);
    drawString("CDs", 40, 265);
    drawString("DVDs", 90, 265);
    drawString("Books", 140, 265);
    drawString("Clothes", 185, 265);
    drawString("Shoes", 240, 265);

    //draw Yaxis
    drawLine(30, 250, 30, 50);
    drawString("0", 12, 250);
    drawString("50", 10, 200);
    drawString("100", 6, 150);
    drawString("150", 6, 100);

    //drawbars
    setColour(blue);
    fillRect(30,190,50,60);
    setColour(green);
    fillRect(80,110,50,140);
    setColour(red);
    fillRect(130,120,50,130);
    setColour(yellow);
    fillRect(180,150,50,100);
    setColour(magenta);
    fillRect(230,110,50,140);

    return 0;
}