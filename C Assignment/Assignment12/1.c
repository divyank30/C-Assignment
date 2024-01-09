// 1. Write a recursive function to print first N natural numbers.
#include<stdio.h>
int Natural(int);
int main()
{
    int x;
    printf("Enter N term ");
    scanf("%d",&x);
    printf("sum of natural no is %d",Natural(x));
   
}
int  Natural(int n)
{
    if (n>0)
    {
    
    return n+Natural(n-1); 
    }
    
    
    
}