#include<stdio.h>

int main()
{
    int a,b;
    FILE *fp;
    fp = fopen("testdata.in","w");
    fprintf(fp,"1\n3\n2 1 3");
    fclose(fp);

    return 0;
}
