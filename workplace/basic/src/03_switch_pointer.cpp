#include <bits/stdc++.h>

void show(int, int, int);

int main()
{
    int a = 100;
    int b = 200;
    int *p = NULL;
    p = &a;
    show(a, b, *p);
    *p = 300;
    show(a, b, *p);
    p = &b;
    show(a, b, *p);
    *p = 400;
    show(a, b, *p);
}

void show(int n1, int n2, int n3)
{
    printf("a=%d b=%d *p=%d\n", n1, n2, n3);
}

// results
/*
a=100 b=200 *p=100
a=300 b=200 *p=300
a=300 b=200 *p=200
a=300 b=400 *p=400
*/

/* Points
1.  var  : value
    &var : address
    p    : address (variable)
    *p   : value (variable)
    &p   : address (p-self)
2.  A pointer is a place to store an address.
3. *p means pointer.(int *p = pointer)
    A pointer that is assigned NULL is called a null pointer.
    if(ptr)     // succeeds if p is not null
    if(!ptr)    // succeeds if p is null

*/