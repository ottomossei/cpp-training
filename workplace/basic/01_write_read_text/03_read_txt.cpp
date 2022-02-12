#include <bits/stdc++.h>

#define SIZE 256

int main()
{
    FILE *file;
    int c;
    file = fopen("./data/sample_read.txt", "r");
    if (file == NULL)
    {
        printf("Don't open this file.");
        exit(1);
    }

    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", (char)c);
    }
    fclose(file);
}

/* Points
1. fgetc one char at a time
2. EOF == -1
*/
