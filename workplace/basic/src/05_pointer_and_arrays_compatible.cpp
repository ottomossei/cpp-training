#include <bits/stdc++.h>

int main()
{
    double d[3] = {0.2, 0.4, 0.6};
    double *p1 = NULL, *p2 = NULL;
    int i;
    p1 = d;
    p2 = d;
    for (i = 0; i < 3; i++)
    {
        printf("%f %f %f\n", *(d + i), p1[i], *p2);
        p2++;
    }
}

// results
/*
0.200000 0.200000 0.200000
0.400000 0.400000 0.400000
0.600000 0.600000 0.600000
*/

/* Points
1. *(d + i) == d[i] (d is an array, but it can be represented as a pointer.)
2. p1[i] (p1 is pointer, but it can be represented as an array.)
3. *p2 (p2 is incremented by p2++;, so p2 address is incremented by 8 bytes)
*/