#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    a=a%10;
    printf("unit digit of the number is %d",a);
    return 0;
}
