#include <stdio.h>

int main(void)
{
    int intArray[6];

    int *p = intArray;
    *p = 10;
    *(p+1) = 22;

    intArray[5] = 27;
    int n = *(p+5);

    double doubleArray[6];
    double *d = doubleArray;
    *d = 3.141;
    *(d+4) = 1.234;
    int offset = 4;
    double g = *(d+offset);

    return 0;
}