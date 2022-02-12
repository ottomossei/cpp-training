#include <bits/stdc++.h>

typedef struct
{
    int a;

    double d;
} num_data;

void dealData1(num_data data);
void dealData2(num_data *pData);

int main()
{
    num_data n1 = {1, 1.2}, n2 = {1, 1.2};
    printf("n1's address is 0x%x, n2's address is 0x%x\n", (uint64_t)&n1, (uint64_t)&n2);
    dealData1(n1);
    dealData2(&n2);
    printf("n1.a = %d, n1.d = %f\n", n1.a, n1.d);
    printf("n1.a = %d, n1.d = %f\n", n2.a, n2.d);
}

void dealData1(num_data data)
{
    printf("dealData1\na=%d, d=%f\n", data.a, data.d);
    printf("address by dealData1 is 0x%x\n", (uint64_t)&data);
    data.a = 2;
    data.d = 2.4;
}

void dealData2(num_data *pData)
{
    printf("dealData2\na=%d, d=%f\n", pData->a, pData->d);
    printf("address by dataDeal2 is 0x%x\n", (uint64_t)pData);
    pData->a = 2;
    pData->d = 2.4;
}
// results
/*
n1's address is 0xffffe040, n2's address is 0xffffe030
dealData1
a=1, d=1.200000
address by dealData1 is 0xffffe010
dealData2
a=1, d=1.200000
address by dataDeal2 is 0xffffe030
n1.a = 1, n1.d = 1.200000
n1.a = 2, n1.d = 2.400000
/*

/* Points
1.  (dealData1) call by reference
    Data is copied, different address.
2.  (dealData2) call by value.
    Data is original(= address is copied), same address.
3.  In general, use call by reference.
    → (When data is huge,) Call by value can corrupt the stack memory.
*/
