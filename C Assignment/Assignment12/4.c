// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void oddnatural(int);
int main()
{
    int x;
    printf("Enter Nth odd natural number");
    scanf("%d",&x);
    oddnatural(x);
}
void oddnatural (int n)
{
    if (n>0)
    {
        printf("%d ",2*n-1);
          oddnatural(n-1);
    }
    
}