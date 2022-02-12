#include <bits/stdc++.h>

#define SIZE 256

int main()
{
    FILE *file;
    char line[SIZE];
    line[0] = '\0';
    file = fopen("./data/sample_read.txt", "r");
    if (file == NULL)
    {
        printf("Don't open this file.");
        exit(1);
    }

    while (fgets(line, SIZE, file) != NULL)
    {
        printf("%s", line);
    }
    fclose(file);
}

/* Points
1.  fgets() one line at a time
*/
