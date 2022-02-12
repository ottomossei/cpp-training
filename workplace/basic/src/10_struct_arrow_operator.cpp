#include <bits/stdc++.h>

typedef struct
{
    int id;
    char name[256];
    int age;
} student_data;

void setData(student_data *, int, char *, int);
void showData(student_data *);

int main()
{
    student_data data[4];
    int i;

    int id[] = {1, 2, 3, 4};
    char name[][256] = {"A", "B", "C", "D"};
    int age[] = {18, 19, 18, 18};

    for (i = 0; i < 4; i++)
    {
        setData(&data[i], id[i], name[i], age[i]);
        showData(&data[i]);
    }
}

void setData(student_data *data, int id, char *name, int age)
{
    data->id = id;
    strcpy(data->name, name);
    data->age = age;
}

void showData(student_data *data)
{
    printf("id：%d,  name：%s,  age：%d\n", data->id, data->name, data->age);
}

// results
/*
id：1,  name：A,  age：18
id：2,  name：B,  age：19
id：3,  name：C,  age：18
id：4,  name：D,  age：18
/*

/* Points
1.  typedef struct{
        int id;
        char name[256];
        int age;
    } student_data;

    is same following code

    struct student
    {
        int id;
        char name[256];
        int age;
    };
    typedef struct student student_data;

2.  Arrow operator
    data -> id = id; (data is pointer)
    data.id = id; (data is value)
*/
