#include <bits/stdc++.h>

#define SIZE 5

int main()
{
    int ar1[SIZE];
    char ar2[SIZE];
    int i;
    int *p1 = NULL;
    char *p2 = NULL;

    for (i = 0; i < SIZE; i++)
    {
        ar1[i] = i;
        ar2[i] = 'A' + i;
    }

    p1 = &ar1[0];
    p2 = &ar2[0];

    for (i = 0; i < SIZE; i++)
    {
        printf("ar1[%d]=%d,  *(p1+%d)=%d,   ", i, ar1[i], i, *(p1 + i));
        printf("ar2[%d]=%c,  *(p2+%d)=%c\n", i, ar2[i], i, *(p2 + i));
    }
}

// results
/*
ar1[0]=0,  *(p1+0)=0,   ar2[0]=A,  *(p2+0)=A
ar1[1]=1,  *(p1+1)=1,   ar2[1]=B,  *(p2+1)=B
ar1[2]=2,  *(p1+2)=2,   ar2[2]=C,  *(p2+2)=C
ar1[3]=3,  *(p1+3)=3,   ar2[3]=D,  *(p2+3)=D
ar1[4]=4,  *(p1+4)=4,   ar2[4]=E,  *(p2+4)=E
*/

/* Points
1.  *(p1 + i) move by 4 bytes (int).
*/