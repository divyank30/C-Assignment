#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i=1;
    printf("Enter Nth Term");
    scanf("%d",&n);
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        if (i==n)
        {
            printf("%dth Term is %d",n,c);
            break;
        }
        i++;
    }


}