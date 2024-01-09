// Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>
int nextprime(int);
int main()
{
    int x;
    printf("Enter Positive Number");
    scanf("%d",&x);
    printf("Next prime number is %d ",nextprime(x));
    return 0;

}
int nextprime(int n)
{
    int i,j;
    for ( i=n+1;i>0; i++)
    {
        
        int flag=1;
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
            
        }
        if (i>1&&flag)
        {
            return i;
        }
        
        

    }
    
}