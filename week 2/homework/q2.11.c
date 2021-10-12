#include <stdio.h>

int n;
void number()
{
    for(n=1; n<101; n++)
    {
        printf("%i^2 = %i \n",n,n*n);
    }
}

void even()
{
    for(n=1; n<102; n++)
    {
        if (n%2 == 0)
        {
            printf("%i^2 = %i \n",n,n*n);
        }
    }
}

void prime()
{
    for(n=1; n<101; n++)
    {
        if (n%2 != 0)
        {
            printf("%i^2 = %i \n",n,n*n);
        }
    }
}

int main(void)
{
    number();
    printf("\n\n\n");
    even();
    printf("\n\n\n");
    prime();
}

