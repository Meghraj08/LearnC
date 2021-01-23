#include<stdio.h>
#include<string.h>
void main()
{
    char data[10];
    FILE *fp;
    fp=fopen("demo.txt","w");
    printf(" Enter Data :- ");
    scanf("%[^@]",&data);
    fputs(data,fp);
    fclose(fp);
}
