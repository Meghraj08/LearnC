#include<stdio.h>
void main()
{
    int marks[7];
    int total=0;
    float avg=0;
    for(int i=0; i<7; i++)
    {
        do
        {
            printf(" Enter Marks #%d :- ", (i+1));
            scanf("%d",&marks[i]);
        }
        while(marks[i]<0 || marks[i]>100);
        total+=marks[i];
    }
    avg=total/7.0;
    printf(" Your Total Marks Are :- %d \n",total);
    printf(" Your Average Marks Are :- %f \n",avg);
    if(avg>=0 && avg<=100)
    {
        if(avg>80)
        {
            printf("* Grade A *");
        }
        else if(avg>50)
        {
            printf("* Grade B *");
        }
        else if(avg>35)
        {
            printf("* Grade C *");
        }
        else
        {
            printf("* FAIL *");
        }
    }
    else
    {
        printf("* INVALID CHOICE *");
    }
}
