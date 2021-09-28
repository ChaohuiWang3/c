#include <stdio.h>
int main(void)
{
 int row;
 int column;
    for (row = 0 ; row < 6 ; row++)
    {
        char c = (row % 2) ? '#' : '*';
        for (column = 0 ; column < 6 ; column++)
        {
            printf("%c",c);
            c = (c == '*') ? '#' : '*';
        }
         printf("\n");
    }
 return 0;
}