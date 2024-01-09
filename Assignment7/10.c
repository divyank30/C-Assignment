#include<math.h>
#include<stdio.h>


int main()
{
    int i=1,j,k,n,sum=0,count=0;
    int rem=0;
    while (i<100)
    {
        n=n/10;
        
        count++;


    }
    printf("%d\n",count);
    while(i)
    {
        j=i%10;
        rem=(int)(pow(j,count));
        printf("%d\n",rem);
        sum=sum+rem;
        i=i/10;
        
    } 
    if (sum==k)
    {
        printf("Given number is Armostrong");
    }
    else
    printf("Given no. is not Armostrong");
   // printf("%d",sum);
    
}