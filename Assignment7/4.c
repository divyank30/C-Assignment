#include<stdio.h>
int main()
{
    int a,b,i;
    i=a;
    printf("Enter Two Number");
    scanf("%d %d",&a,&b);
    while(i>=1)
    {
        if ((a%i==0)&&(b%i==0))
        {
            printf("HCF of %d & %d is %d",a,b,i);
            break;
        }
        i--;
    }
    return 0;
}