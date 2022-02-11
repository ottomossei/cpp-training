#include <bits/stdc++.h>

#define SIZE 4

int main()
{
    int *p1 = NULL;
    double *p2 = NULL;
    int i;
    p1 = (int *)malloc(sizeof(int) * SIZE);
    p2 = (double *)malloc(sizeof(double) * SIZE);
    for (i = 0; i < SIZE; i++)
    {
        p1[i] = i;
        p2[i] = i / 10.0;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("p1[%d]=%d p2[%d]=%f\n", i, p1[i], i, p2[i]);
    }
    free(p1);
    free(p2);
}

// results
/*
p1[0]=0 p2[0]=0.000000
p1[1]=1 p2[1]=0.100000
p1[2]=2 p2[2]=0.200000
*/

/* Points
1. malloc(#include <stdio.h>) is function to allocate memory
2. Absolutely use "free" after "malloc"
   → Memory leak
3. p1 = (int *)malloc(sizeof(int) * SIZE);
   Cast allocated memory ("SIZE" times the size of the int type) to int type pointer
   → Array[int] of "SIZE" sizes
4. malloc allocated Heap memory (dynamic memory), NOT Stack memory (variable).
   Stacked memory is automatically released when the program ends.
   → If the heap area is used too much, the capacity may be exhausted.
   → Garbage collection
5. You can access p1[3], but it's dengerous!
*/