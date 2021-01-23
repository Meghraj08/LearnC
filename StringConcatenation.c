#include<stdio.h>
#include<string.h>
void main()
{
    char fname[10];
    char lname[10];
    printf(" Enter Your First Name :- \n");
    scanf("%s",&fname);
    printf(" Enter Your Last Name :- \n");
    scanf("%s",&lname);
    strcat(fname," ");
    strcat(fname,lname);
    printf("%s",fname);
}
