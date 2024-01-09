// 6. Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int fact(int n);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Factorial of given no. is %d",fact(x) );
    return 0;
}
int fact(int n)
{
    if (n>1)
    {
     return n*fact(n-1);

    }
    
}