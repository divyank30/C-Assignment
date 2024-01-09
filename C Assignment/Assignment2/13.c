#include<stdio.h>
int main()
{
    int a;
    printf("Enter three digits number");
    scanf("%d",&a);
    a=((a%10)*100)+(a/10);
    printf("After shifting the digit the number is %d",a);
}