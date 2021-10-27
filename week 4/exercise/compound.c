#include <stdio.h>

int main(void)
{
    if(1)
    {
        int n = 1;
        for(int x = 0; x<4; x++)
        {
            printf("for loop scope: n = %i\n",n);
            n++;
        }
        printf("if statement scpoe: n = %i\n",n);
    }
}