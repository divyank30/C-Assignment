//Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fib(int);
int main()
{
    int x;
    printf("Enter how much term shoud print of fibonaci series");
    scanf("%d",&x);
    fib(x);
    return 0;
}
void fib(int n)
{
    int i,a=-1,b=1,c;
    for ( i = 1; i <=n; i++)
    {
        printf("%d",c=a+b);
        a=b;
        b=c;
    }
    
}