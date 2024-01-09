#include<stdio.h>
int main()
{
    int i,n=1;
    printf("Enter a number");
    scanf("%d",&i);
    while (n<=2*i)
    {
        printf("%d ",n);
        n+=2;
    }
    
}