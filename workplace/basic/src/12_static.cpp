#include<bits/stdc++.h>

void foo();

int main() {
	int i;
	for (i = 0; i < 4; i++) {
		foo();
	}
}

void foo()
{
	static int num = 0;
	printf("num=%d\n", num);
	num++;
}

// results
/*
num=0
num=1
num=2
num=3
/*

/* Points
1.  "static" is only executed once.
*/