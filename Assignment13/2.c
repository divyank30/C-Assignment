// 2. Write a recursive function to calculate sum of first N odd natural numbers.
#include<stdio.h>
int sumodd(int n);
int main()
{
    int x;
    printf("Enter a positive number");
    scanf("%d",&x);
    int s=sumodd(x);
    printf("Sum of odd natural no. is %d",s );
    return 0;
}
int sumodd(int n)
{
    if (n>0)
    {
        return (2*n-1)+sumodd(n-1);
    }
    
    
}