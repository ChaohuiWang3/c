#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    for(int row=0; row<rand() % 5 + 3; row++)
    {
        for(int column=0; column<rand() % 7+ 5; column++)
        {
            printf("0 ");
        }
        printf("\n");
    }
}