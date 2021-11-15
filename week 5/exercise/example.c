#include <stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    char *p = argv[3];
    printf("Argument count: %i\n",argc);
    for(int n=0; n<argc; n++)
    {
        printf("Arg[%i] %s\n",n,argv[n]);
    }
    int x = atoi(p);
    printf("x = %i\n",x);
}