//3. Write a recursive function to print first N odd natural numbers
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
        oddnatural(n-1);
        printf("%d ",2*n-1);
    }
    
}