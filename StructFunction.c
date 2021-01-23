#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20],phone[20],post[20];
    float salary;
};

void setData(struct employee a[])
{
    for(int i=0; i<3; i++)
    {
        printf(" Enter Your Name :- \n");
        fflush(stdin);
        scanf("%[^\n]",&a[i].name);
        printf(" Enter Your Salary :- \n");
        scanf("%f",&a[i].salary);
        printf(" Enter Your iD :- \n");
        fflush(stdin);
        scanf("%d",&a[i].id);
        printf(" Enter Your Post :- \n");
        fflush(stdin);
        scanf("%[^\n]",&a[i].post);
        printf(" Enter Your Phone Number :- \n");
        fflush(stdin);
        scanf("%[^\n]",&a[i].phone);
    }
}

void displayData(struct employee a[])
{
    for(int i=0; i<3; i++)
    {
        printf(" Name :- %s. Salary :- %f. iD :- %d. Post :- %s. Phone Number :- %s.\n",a[i].name,a[i].salary,a[i].id,a[i].post,a[i].phone);
    }
}

void findEmployee(struct employee a[])
{
    int tempId,flag=0;
    printf(" Enter id of employee to find\n");
    scanf("%d",&tempId);
    for(int i=0; i<3 ; i++)
    {
        if(a[i].id == tempId)
        {
            flag = 1;
            printf(" Name :- %s. Salary :- %f. iD :- %d. Post :- %s. Phone Number :- %s.\n",a[i].name,a[i].salary,a[i].id,a[i].post,a[i].phone);
        }
    }
    if(flag==0)
    {
        printf("No Employee Found");
    }
}

void main()
{
    struct employee s[3];
    setData(s);
    displayData(s);
    findEmployee(s);
}
