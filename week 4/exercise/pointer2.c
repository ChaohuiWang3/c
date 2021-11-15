#include <stdio.h>

int main(void)
{
    int myArray[6];

    int *p = myArray;
    int *p2 = &(myArray[0]);

    char a[] = "Hello";
    char *s = a; 
    *s = 'Z';

    return 0;
}