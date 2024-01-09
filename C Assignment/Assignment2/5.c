#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Three Digits Number");
    scanf("%d",&a);
    b=(a%10);
    b=b+((a/10)%10);
    b=b+(a/100);
    printf("Sum of digits are %d",b);


}