#include <stdio.h>

int main(void)
{
    int m[3][4] = {
                    {1,2,3,4},
                    {4,5,6,7},
                    {8,9,10,11}
                  };
    int row, column, sum = 0;
    for(int row=0; row<3; row++)
    {
        for(column=0; column<4; column++)
        {
            sum += m[row][column];
        }
    }
    printf("Sum is %i\n",sum);
}