#include<stdio.h>
#include<string.h>
void swapping(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

void main()
{
    int a=5,b=10;
    swapping(&a,&b);
    printf(" a=%d & b=%d ",a,b);
}
