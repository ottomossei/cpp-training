#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 100;
    double b = 1.2;
    float c = 123.4f;
    char d= 'a';
    printf("value %d, size %dbyte, address 0x%x\n", a, sizeof(int), &a);
    printf("value %f, size %dbyte, address 0x%x\n", b, sizeof(double), &a);
    printf("value %f, size %dbyte, address 0x%x\n", c, sizeof(float), &a);
    printf("value %c, size %dbyte, address 0x%x\n", d, sizeof(char), &a);
}

// results
/*
value 100, size 4byte, address 0x7809ff9c
value 1.200000, size 8byte, address 0x7809ff9c
value 123.400002, size 4byte, address 0x7809ff9c
value a, size 1byte, address 0x7809ff9c
*/
