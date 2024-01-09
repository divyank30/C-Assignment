#include<stdio.h>
int main()
{
    int a,count=0;
    printf("Enter A Number");
    scanf("%d",&a);
    for ( count = 1;count >0; count++)
    {
        if(a&1==1)
{        printf(" position of first 1 in LSB is %d",count);
        break;}
        a=a>>1;

    }
 //   return 0;
}