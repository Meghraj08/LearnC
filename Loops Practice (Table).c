#include<stdio.h>
void main()
{
    char yes='Y';
    while(yes=='Y' || yes=='y')
    {
        int n,i;
        printf("* ENTER NUMBER *\n");
        scanf("%d",&n);
        for(i=1; i<=10; i++)
        {
            printf(" %d * %d = %d \n",n,i,n*i);
        }
    }
    printf("\n Press Y To Continue \n");
    fflush(stdin);
    scanf("%c",&yes);
}
