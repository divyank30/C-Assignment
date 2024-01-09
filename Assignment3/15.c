#include<stdio.h>
int main()
{
    int a;
    printf("Enter  a numbr");
    scanf("%d",&a);
    if(a>0)
    printf("Given number is positive");
    if(a<0)
    printf("Given number is negative");
    if(a==0)
    printf("Given number is zero");
}