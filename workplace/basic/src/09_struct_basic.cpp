#include <bits/stdc++.h>

struct student
{
    int id;
    char name[256];
    int age;
};

typedef struct student student_data;

int main()
{
    struct student data;
    data.id = 1;
    strcpy(data.name, "ottomossei");
    data.age = 18;

    printf("id:%d,  name:%s,  age:%d\n", data.id, data.name, data.age);

    student_data array_data[] = {{1, "A", 18}, {2, "B", 18}, {3, "C", 18}};

    for (int i = 0; i < 3; i++)
    {
        printf("id:%d,  name:%s,  age:%d\n", array_data[i].id, array_data[i].name, array_data[i].age);
    }
}

// results
/*
id:1,  name:ottomossei,  age:18
id:1,  name:A,  age:18
id:2,  name:B,  age:18
id:3,  name:C,  age:18
/*

/* Points
1. Struct is function for defining data structures.
2. typedef struct student student_data;
   it means that student_data is type of student.
3. data[] is Structure Array.
*/
