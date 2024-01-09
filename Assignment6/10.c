#include<stdio.h>
int main()
{
    int i=1,n,rem,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    {
        do
        {
            
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;
            if(n==0)
{            printf("Reverse Of The Number Is %d ",sum);
            break;}
            else
            i++;
        } while (n!=0);
        
    }
    return 0;
}