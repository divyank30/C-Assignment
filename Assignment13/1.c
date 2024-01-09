// 1. Write a recursive function to calculate sum of first N natural numbers.
#include<stdio.h>
int sumn(int);
int main()
{
    int x;
    printf("Enter A Positive Number");
    scanf("%d",&x);
    printf("Sum of first natural number is %d",sumn(x));
    return 0;
}
int sumn(int n)
{
    int s;
    if (n>0)
    {
       return n+sumn(n-1);
    }
    
}