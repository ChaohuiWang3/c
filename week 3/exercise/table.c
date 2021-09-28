#include <stdio.h>

int main(void)
{
    int n;
    printf("n\tn^2\tn^3\n");
    for(n = 1; n < 10; n++)
        {
            printf("%i\t%i\t%i\n",n, n*n, n*n*n);
        }
}