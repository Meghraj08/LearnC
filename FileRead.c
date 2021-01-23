#include<stdio.h>
#include<string.h>
void main()
{
    char c;
    FILE *fp;
    fp=fopen("Array.c","r");
    while((c=fgetc(fp)) != EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
}
