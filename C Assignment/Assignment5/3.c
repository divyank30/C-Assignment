#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
        printf("%d ",n);
        n--;
    } while (n>=1);
    
}