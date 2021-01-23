#include<stdio.h>
#include"functionsHeader.h"
void main()
{
    int a,b,ans;
    printf(" Enter A ");
    scanf("%d",&a);
    printf(" Enter B ");
    scanf("%d",&b);
    ans = multiplication1(a,b);
    printf(" Multiplication Is %d",ans);
}

void main()
{
    int a,b;
    printf(" Enter A ");
    scanf("%d",&a);
    printf(" Enter B ");
    scanf("%d",&b);
    multiplication2(a,b);
}

void main()
{
    int ans;
    ans = multiplication3();
    printf(" Multiplication Is %d",ans);
}

void main()
{
    multiplication4();
}
