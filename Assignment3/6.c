#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d is greater ",a);
    if(b==a)
    printf("%d number is equal",b);
    if(b>a)
    printf("%d is greater",b);
    return 0;
    
}