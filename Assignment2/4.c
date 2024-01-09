#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d \n",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a is %d And b is %d",a,b);
    return 0;
}
