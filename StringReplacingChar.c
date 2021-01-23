#include<stdio.h>
void main()
{
    char name[20],findChar,replaceChar;
    int len;
    printf(" Please Enter Your Name :- ");
    scanf("%[^\n]",&name);
    printf(" Your Name Is :- %s \n",name);
    printf(" What Do You Want To Find :- \n");
    fflush(stdin);
    scanf("%c",&findChar);
    printf(" Replacing Character With :- \n");
    fflush(stdin);
    scanf("%c",&replaceChar);
    while(name[len] != '\0')
    {
        len++;
    }
    for(int i=0; i<len; i++)
    {
        if(name[i]==findChar)
        {
            name[i]=replaceChar;
        }
    }
    printf(" Your Updated Name Is :- %s",name);
}
