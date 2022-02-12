#include <bits/stdc++.h>

int main()
{
    FILE *file;
    file = fopen("./data/sample_write.txt", "w");
    if (file == NULL)
    {
        printf("Don't open this file.");
        exit(1);
    }
    else
    {
        fprintf(file, "Hello World.\r\n");
        fprintf(file, "ABCDEF\r\n");
        fclose(file);
    }
}

/* Points
1.  exit(1) : Abnormal termination of the program
2.  if (file ==NULL){
    This program is executed, for example,
    when the target directory does not exist or when you do NOT have permission to read it.
*/