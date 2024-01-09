// 3. Write a recursive function to calculate sum of first N Even natural numbers.
#include<stdio.h>
int sumeven(int n);
int main()
{
    int x;
    printf("Enter a positive number");
    scanf("%d",&x);
    printf("Sum of even natural no. is %d",sumeven(x) );
    return 0;
}
int sumeven(int n)
{
    if (n>0)
    {
        return (2*n)+sumeven(n-1);
    }
    
    
}