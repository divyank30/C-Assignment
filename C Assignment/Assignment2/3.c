#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d \n",a,b);
    //            1st method
    c=a;
    a=b;
    b=c;
    //             2nd method
    // c=a+b;
    // a=c-a;
    // b=c-a;
    printf("After swapping a is %d And b is %d",a,b);
    return 0;
}
