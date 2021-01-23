#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    int len=0;
    printf(" Enter Your Name :- ");
    scanf("%[^\n]",&name);
    len = strlen(name);
    printf(" Length Of Your Name Is :- %d",len);
}
