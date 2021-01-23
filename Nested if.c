#include<stdio.h>
void main()
{
    char yesno='Y';
    while(yesno=='Y' || yesno=='y')
    {
        int math,eng,sci,hind,eco;
        int total=0;
        float avg;
        do
        {
            printf("* Enter Your Maths Marks *\n");
            scanf("%d",&math);
        }
        while(math<0 ||  math>100);
        do
        {
            printf("* Enter Your English Marks *\n");
            scanf("%d",&eng);
        }
        while(eng<0 || eng>100);
        do
        {
            printf("* Enter Your Science Marks *\n");
            scanf("%d",&sci);
        }
        while(sci<0 || sci>100);
        do
        {
            printf("* Enter Your Hindi Marks *\n");
            scanf("%d",&hind);
        }
        while(hind<0 || hind>100);
        do
        {
            printf("* Enter Your Economics Marks *\n");
            scanf("%d",&eco);
        }
        while(eco<0 || eco>100);
        total=math+eng+sci+hind+eco;
        avg=total/5.0;
        printf("* Your Total Is %d *\n",total);
        printf("* Your Average Marks Are %f *\n",avg);
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
        printf("\n Press Y To Continue \n");
        fflush(stdin);
        scanf("%c",&yesno);
    }
}
