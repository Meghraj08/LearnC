#include<stdio.h>
#include<string.h>
struct student
{
    int roll,std;
    char name[10],sec;
};
void main()
{
    struct student s;
    printf(" Enter Name :- \n");
    scanf("%[^\n]",&s.name);
    printf(" Enter Roll No :- \n");
    scanf("%d",&s.roll);
    printf(" Enter Standard :- \n");
    scanf("%d",&s.std);
    printf(" Enter Section :- \n");
    fflush(stdin);
    scanf("%c",&s.sec);
    printf(" Name :- %s. Roll No :- %d. Standard :- %d. Section :- %c.",s.name,s.roll,s.std,s.sec);
}
