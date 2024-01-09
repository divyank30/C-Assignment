#include<stdio.h>
int main()
{
    int count=1,n;
    printf("Enter Any Digit Of Number");
    scanf("%d",&n);
    do
    {
        n=n/10;
        if(n==0)
        break;
        else
        count++;
    } while (count>1);
    printf("Number of digit is %d",count);
    return 0;
    
}