#include<stdio.h>
int fact(int);
int fact(int a)
{
    int s=1,t=a,i=1;
    for ( i = 1; i <=a; i++)
    {
        s=s*t;
        t--;
    }
    return s;
}
int main()
{
    int x;
    printf("Enter a Number");
    scanf("%d",&x);
    printf("Factorial of %d is %d",x,fact(x));
    return 0;
}