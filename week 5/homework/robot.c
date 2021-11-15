#include <stdio.h>
#include "graphics.c"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int robot_x, robot_y, marker_x, marker_y, obstacle_x, obstacle_y;
int startpoint = 80;
int rectlength = 40;
int gridlength = 400;
char *direction;

void grid()
{
    setWindowSize(650,650);
    background();
    for(int row=0; row<10; row++)//grid
    {
        for(int column=0; column<10; column++)
        {
            drawRect(startpoint+column*rectlength, startpoint+row*rectlength, rectlength, rectlength);
        }
    }

    setColour(gray);//marker
    marker_x = startpoint + 5*rectlength;
    marker_y = startpoint + 2*rectlength;
    fillRect(marker_x, marker_y, rectlength, rectlength);

    setColour(red);//obstacle
    obstacle_x = startpoint + 9*rectlength;
    obstacle_y = startpoint + 3*rectlength;
    fillRect(obstacle_x, obstacle_y, rectlength, rectlength);
}

bool atmarker()
{
    return((startpoint+robot_x*rectlength == marker_x) && (startpoint+robot_y*rectlength == marker_y));
}

int canmoveforward()
{
    if(strcmp(direction,"east") == 0)
    {
        if((startpoint+robot_x*rectlength >= gridlength+rectlength) || ((startpoint+robot_x*rectlength == obstacle_x-rectlength) && 
        (startpoint+robot_y*rectlength == obstacle_y)))
            return 0;
        else
            return 1;
    }
    else if(strcmp(direction,"south") == 0)
    {
        if((startpoint+robot_y*rectlength == gridlength+rectlength) || ((startpoint+robot_y*rectlength == obstacle_y-rectlength) &&
         (startpoint+robot_x*rectlength == obstacle_x)))
            return 0;
        else
            return 1;
    }
    else if(strcmp(direction,"west") == 0)
    {
        if((startpoint+robot_x*rectlength == startpoint) || ((startpoint+robot_x*rectlength == obstacle_x+rectlength) &&
        (startpoint+robot_y*rectlength == obstacle_y)))
            return 0;
        else
            return 1;
    }
    else if(strcmp(direction,"north") == 0)
    {
        if((startpoint+robot_y*rectlength <= startpoint) || ((startpoint+robot_y*rectlength == obstacle_y+rectlength) && 
        (startpoint+robot_x*rectlength == obstacle_x)))
            return 0;
        else
            return 1;
    }
}

int triangle(int x, int y, char *direction)
{
    clear();
    if(strcmp(direction,"east") == 0)
    {
        int draw_x[] = {startpoint+x*rectlength, startpoint+x*rectlength+40, startpoint+x*rectlength};
        int draw_y[] = {startpoint+y*rectlength, startpoint+y*rectlength+20, startpoint+y*rectlength+40};
        setColour(green);
        fillPolygon(3, draw_x, draw_y);
    }
    else if(strcmp(direction,"south") == 0)
    {
        int draw_x[] = {startpoint+x*rectlength, startpoint+x*rectlength+20, startpoint+x*rectlength+40};
        int draw_y[] = {startpoint+y*rectlength, startpoint+y*rectlength+40, startpoint+y*rectlength};
        setColour(green);
        fillPolygon(3, draw_x, draw_y);
    }
    else if(strcmp(direction,"west") == 0)
    {
        int draw_x[] = {startpoint+x*rectlength, startpoint+x*rectlength+40, startpoint+x*rectlength+40};
        int draw_y[] = {startpoint+y*rectlength+20, startpoint+y*rectlength, startpoint+y*rectlength+40};
        setColour(green);
        fillPolygon(3, draw_x, draw_y);
    }
    else if(strcmp(direction,"north") == 0)
    {
        int draw_x[] = {startpoint+x*rectlength, startpoint+x*rectlength+20, startpoint+x*rectlength+40};
        int draw_y[] = {startpoint+y*rectlength+40, startpoint+y*rectlength, startpoint+y*rectlength+40};
        setColour(green);
        fillPolygon(3, draw_x, draw_y);
    }
}

void forward()
{
    foreground();
    if(strcmp(direction,"east") == 0)
    {
        triangle(robot_x, robot_y, "east");
        robot_x += 1;
    }
    else if(strcmp(direction,"south") == 0)
    {
        triangle(robot_x, robot_y, "south");
        robot_y += 1;
    }
    else if(strcmp(direction,"west") == 0)
    {
        triangle(robot_x, robot_y, "west");
        robot_x -= 1;
    }
    else if(strcmp(direction,"north") == 0)
    {
        triangle(robot_x, robot_y, "north");
        robot_y -= 1;
    }
}

void right()
{
    if(strcmp(direction,"east") == 0)
    {
        direction = "south";
    }
    else if(strcmp(direction,"south") == 0)
    {
        direction = "west";
    }
    else if(strcmp(direction,"west") == 0)
    {
        direction = "north";
    }
    else if(strcmp(direction,"north") == 0)
    {
        direction = "east";
    }
}


int main(int argc, char **argv)
{
    grid();
    if (argc == 4) 
    {
        robot_x = atoi(argv[1]);
        robot_y = atoi(argv[2]); 
        direction = argv[3]; 
    }
    while(!atmarker())
    {
        if(canmoveforward())
            forward();
        else
            right();
        sleep(150);
    }
    if(canmoveforward())
        forward();
    else
        right();
    sleep(150);
}