#include<stdio.h>
void main()
{
    char yesno='Y';
    while(yesno=='Y' || yesno=='y')
    {
        int a,b;
        char op;
        printf(" PLEASE ENTER A \n");
        scanf("%d",&a);
        printf(" PLEASE ENTER B \n");
        scanf("%d",&b);
        printf(" PLEASE ENTER OPERATIONAL CHARACTER \n");
        fflush(stdin);
        scanf("%c",&op);
        switch(op)
        {
        case'+':
            printf(" ADDITION IS %d ",(a+b));
            break;
        case'-':
            printf(" SUBTRACTION IS %d ",(a-b));
            break;
        case'*':
            printf(" MULTIPLICATION IS %d ",(a*b));
            break;
        case'/':
            printf(" DIVISION IS %d ",(a/b));
            break;
        default:
            printf(" INVALID CHOICE ");
            break;
        }
        printf("\n Press Y To Continue \n");
        fflush(stdin);
        scanf("%c",&yesno);
    }
}
