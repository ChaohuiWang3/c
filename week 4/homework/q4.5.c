#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s;
    int *pointer1, *pointer2;
    scanf("%s",&s);
    int *copy = &s;
    int count = 0;
    int len = strlen(s);
    while(count++ < len/2)
    {
        *pointer1++ = *copy++;
    }
    printf("%s", *pointer1);
    printf("   ");
    while(count++ < len)
    {
        *pointer2++ = (*(copy+len/2))++;
    }
    printf("%s", *pointer2);
}