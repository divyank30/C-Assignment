#include<stdio.h>
int main()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    if(a>99&&a<1000)
    printf("given numbr is three digit numbr");
    else
    printf("Given number is not threedigit number");
    return 0;
}