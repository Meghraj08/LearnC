#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20],phone[20],post[20];
    float salary;
};
void main()
{
    struct employee s[3];
    for(int i=0; i<3; i++)
    {
        printf(" Enter Your Name :- \n");
        fflush(stdin);
        scanf("%[^\n]",&s[i].name);
        printf(" Enter Your Salary :- \n");
        scanf("%f",&s[i].salary);
        printf(" Enter Your iD :- \n");
        fflush(stdin);
        scanf("%d",&s[i].id);
        printf(" Enter Your Post :- \n");
        fflush(stdin);
        scanf("%[^\n]",&s[i].post);
        printf(" Enter Your Phone Number :- \n");
        fflush(stdin);
        scanf("%[^\n]",&s[i].phone);
    }
    for(int i=0; i<3; i++)
    {
        printf(" Name :- %s. Salary :- %f. iD :- %d. Post :- %s. Phone Number :- %s.\n",s[i].name,s[i].salary,s[i].id,s[i].post,s[i].phone);
    }
}
