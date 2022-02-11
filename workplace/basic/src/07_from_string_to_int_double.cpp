#include <bits/stdc++.h>

int main()
{
   char s1[10];
   int len;
   strcpy(s1, "ABC");
   printf("s1=%s\n", s1);

   strcat(s1, "DEF");
   printf("s1=%s\n", s1);
   len = strlen(s1);
   printf("len=%d\n", len);

   char s2[] = "100";
   char s3[] = "12.3";

   int a;
   double b;
   a = atoi(s2);
   b = atof(s3);
   printf("a=%d,  b=%f\n", a, b);
}

// results
/*
s1=ABC
s1=ABCDEF
len=6
a=100,  b=12.300000
*/

/* Points
1. A char array end with a null character.
   (s1)[0]65 'A'
   (s1)[1]66 'B'
   (s1)[2]67 'C'
   (s1)[3]0  '\000' // null character
   (s1)[4]85 'U'...

2. char s2[] = "100";
   Automatically set array of 4 sizes.

3. include <stdlib.h>
   integer : atoi(string)
   double : atof
*/