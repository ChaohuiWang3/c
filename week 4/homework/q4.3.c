#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int *x = (int *)a - (int *)b;
    return *x;
}

int *sort(int *n, int size)
{
    int *copy = malloc(sizeof(int) * size);
    int count = 0;
    while(count++ < size)
    {
        *copy++ = *n++;
    }
    qsort(copy, size, sizeof(int), compare);
    return copy;
}