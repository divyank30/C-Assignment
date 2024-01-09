// 7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void squareNatural(int);
int main()
{
    int x;
    printf("Enter N term ");
    scanf("%d",&x);
    squareNatural(x);
   
}
void squareNatural(int n)
{
    if (n==0)
    {
        return;
    }
    
    squareNatural(n-1);
    printf(" sqare of %d is %d\n ",n,n*n);
    
}