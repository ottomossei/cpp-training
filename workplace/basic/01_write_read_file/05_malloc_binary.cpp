#include <bits/stdc++.h>

int main()
{
    FILE *file;
    int i, size;
    char *rdata;
    file = fopen("./data/read_write.bin", "rb");
    if (file == NULL)
    {
        printf("Don't open this file");
        exit(1);
    }

    fseek(file, 0, SEEK_END);
    size = ftell(file);
    rdata = (char *)malloc(sizeof(char) * size);
    fseek(file, 0, SEEK_SET);
    fread(rdata, sizeof(char), size, file);
    fclose(file);

    for (i = 0; i < size; i++)
    {
        printf("%x", rdata[i]);
    }
    printf("\n");
    free(rdata);
}

// results
/*
10 1a 1e 1f
*/

/* Points
1. bainary is example for .png, .wav...
2. "malloc" creates memory of appropriate size to read binary data.
3. fseek() : Move the read/write position of the file.
4. ftell() : Returns the location of the current file.
   SEEK_SET : head position
   SEEK_CUR : current position
   SEEK_END : end position
*/
