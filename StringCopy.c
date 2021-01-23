#include<stdio.h>
#include<string.h>
void main()
{
    char fname[10];
    char lname[10];
    printf(" Enter Your First Name :- ");
    scanf("%s",&fname);
    printf(" Enter Your Last Name :- ");
    scanf("%s",&lname);
    strcpy(fname,lname);
    printf("%s",lname);
}

