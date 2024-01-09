// 2. Write a recursive function to print first N natural numbers in reverse order.
#include<stdio.h>
void Natural(int);
int main()
{
    int x;
    printf("Enter n number ");
    scanf("%d",&x);
    Natural(x);
}
void Natural(int n)
{
    if (n>0)
    {
        printf("%d ",n);
        Natural(n-1);
    }
    
}
