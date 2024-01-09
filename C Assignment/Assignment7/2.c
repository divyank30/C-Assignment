#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i=1;
    printf("Enter N Term");
    scanf("%d",&n);
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" F%d %d \n",i,c);
        i++;
    }


}