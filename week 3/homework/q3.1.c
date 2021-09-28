#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double side1, side2, side3;
double area, semiperimeter, perimeter;

void entersidelength()
{
    printf("enter three sides:\n");
    scanf("%lf %lf %lf",&side1, &side2, &side3);
}

void calculateperimeter()
{
    perimeter= side1+side2+side3;
    printf("perimeter = %f\n",perimeter);
}

void calculatesemiperimeter()
{
    semiperimeter=0.5*(side1+side2+side3);
    printf("semiperimeter = %f\n",semiperimeter);
}

void calculatearea()
{
    area = sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
    printf("area = %f",area);
}

bool whethertriangle()
{
    if((side1 >= (side2+side3))|| (side2 >= (side1+side3))|| (side3 >= (side1+side2)))
    {return false;}
    else
    {return true;}
}


int main(void)
{
    entersidelength();
    if (whethertriangle())
    {
        calculateperimeter();
        calculatesemiperimeter();
        calculatearea();
    }
    else
    {
        printf("error");
    }
}