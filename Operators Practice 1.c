#include<stdio.h>
void main()
{
    char yesno='Y';
    while(yesno=='Y' || yesno=='y')
    {
        int a,b;
        int ans;
        printf(" Enter The Value Of A : \n");
        scanf("%d",&a);
        printf(" Enter The Value Of B : \n");
        scanf("%d",&b);
        printf("************************************\n");
        ans=a+b;
        printf("* Your Addition Answer Is :- %d\n",ans);
        ans=a-b;
        printf("* Your Subtraction Answer Is :- %d\n",ans);
        ans=a*b;
        printf("* Your Multiplication Answer Is :- %d\n",ans);
        ans=a/b;
        printf("* Your Division  Answer Is :- %d\n",ans);
        printf("*************************************");
        printf("\n Press Y To Continue \n");
        fflush(stdin);
        scanf("%c",&yesno);
    }
}
