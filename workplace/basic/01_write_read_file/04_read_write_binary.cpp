#include <bits/stdc++.h>

int main()
{
    FILE *file;
    int i;
    char wdata[] = {0x10, 0x1a, 0x1e, 0x1f};
    char rdata[4];

    file = fopen("./data/read_write.bin", "wb");
    if (file == NULL)
    {
        printf("Don't open this file.\n");
        exit(1);
    }
    fwrite(wdata, sizeof(char), sizeof(wdata), file);
    fclose(file);

    file = fopen("./data/read_write.bin", "rb");
    if (file == NULL)
    {
        printf("Don't open this file.\n");
        exit(1);
    }

    fread(rdata, sizeof(char), sizeof(rdata), file);
    fclose(file);

    for (i = 0; i < sizeof(rdata); i++)
    {
        printf("%x ", rdata[i]);
    }

    printf("\n");
}

// results
/*
10 1a 1e 1f
*/

/* Points
1. binary ("wb", "rb")
2. EOF == -1
*/
