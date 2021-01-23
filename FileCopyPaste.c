#include<stdio.h>
#include<string.h>
void main()
{
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("demo.txt","r");
    fp2=fopen("demo1.txt","w");
    while((ch=fgetc(fp1)) != EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp2);
    fclose(fp1);
}
