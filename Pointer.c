#include<stdio.h>
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
    printf(" Before Calling Function :- a=%d & b=%d \n",a,b);
    swapping(&a,&b);
    printf(" After Calling Function :- a=%d & b=%d \n",a,b);
}
