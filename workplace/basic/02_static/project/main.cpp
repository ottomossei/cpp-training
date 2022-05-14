#include <bits/stdc++.h>
#include "header/studentDatabase.hpp"
#include "header/dataOutput.hpp"

int main()
{
    int i;
    char names[][LENGTH] = {"A", "B", "C", "D"};
    int ids[] = {1, 2, 2, 3};
    initDatabase();
    for (i = 0; i < 4; i++)
    {
        add(ids[i], names[i]);
        printf("Regist：%d %s\n", ids[i], names[i]);
        showError();
    }
    for (i = 0; i < 3; i++)
    {
        showStudentData(get(i + 1));
    }
}