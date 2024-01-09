#include<stdio.h>
int main()
{
    int i=2,n;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
        printf("%d ",i);
        i+=2;
    } while (i<=2*n);
    
}