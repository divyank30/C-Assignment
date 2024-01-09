#include<stdio.h>
int prime(int);
int main()

{
    int n,s;
    printf("Enter a positive Number");
    scanf("%d",&n);
    s=prime(n);
    if (s==1)
    {
        printf("Prime Number");
    }
    else
    printf("Not a prime number");
    return 0;
    
}
int prime(int x)
{
    int i;
    for ( i = 2; i <=x/2; i++)
    {
        if (x%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}