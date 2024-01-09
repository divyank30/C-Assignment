#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a&1)
    printf("Number is odd");
    else
    printf("Number is even");
    return 0;
}