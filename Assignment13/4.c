// 4. Write a recursive function to calculate sum of squares of first n natural numbers.
#include<stdio.h>
int sumsquare(int n);
int main()
{
    int x;
    printf("Enter a positive number");
    scanf("%d",&x);
    printf("Sum of square of  natural no. is %d",sumsquare(x) );
    return 0;
}
int sumsquare(int n)
{
    if (n>0)
    {
        return (n*n)+sumsquare(n-1);
    }
    
    
}