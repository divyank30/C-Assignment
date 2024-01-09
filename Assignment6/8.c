#include<stdio.h>
int main()
{
    int i=2,n,flag = 0;
    printf("Enter A Number");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
{
        flag = 1;
        break;}
        else
        i++;
    } while (i<=n/2);
     if(flag==1)
        printf("Not Prime Number");
    else
    printf("Prime Number");
    return 0;
    
}